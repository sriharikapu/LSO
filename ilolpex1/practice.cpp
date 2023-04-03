#include<stdio.h>
#include<iostream>

#include <ilcplex/ilocplex.h>
#include <ilconcert/ilosys.h>

using namespace std;

ILOSTLBEGIN;
typedef IloArray<IloNumArray> Num2DMatrix;
typedef IloArray<Num2DMatrix> Num3DMatrix;//3D array of Num
typedef IloArray<IloBoolVarArray> NumBoolVar2DMatrix; // 2D array of NumVar
typedef IloArray<NumBoolVar2DMatrix> NumBoolVar3DMatrix;//3D array of Var
typedef IloArray<IloNumVarArray> array2d;//Creating a 2d array of x variables
typedef IloArray<array2d> array3d;//Creating a 3d array of x variables

int main(int argc, char** argv)
{
	IloEnv practiceenv;

	try
	{
		IloModel practicemodel(practiceenv); // Model declaration

		// Varaible declaration
		//IloNumVar x1(practiceenv, 0, IloInfinity, ILOFLOAT);
		//IloNumVar x2(practiceenv, 0, IloInfinity, ILOFLOAT);
		IloNumVar x1(practiceenv);
		IloNumVar x2(practiceenv);

		//-----------------------------------Objective function---------------------------------------

		practicemodel.add(IloMaximize(practiceenv, 2 * x1 + 3 * x2));

		//--------------------------------------------------constraint 1---------------------------------------
		practicemodel.add(2 * x1 + x2 <= 4);


		//--------------------------------------------------constraint 2---------------------------------------
		practicemodel.add(x1 + 2 * x2 <= 5);


		IloCplex practicecplex(practiceenv);
		practicecplex.extract(practicemodel);
		practicecplex.solve();
		cout << "total cost: " << practicecplex.getObjValue() << endl;
		practicecplex.exportModel("practiceexample.lp");



	}
	catch (IloException& e)
	{
		cerr << "error: " << e << endl;
	}
	catch (...)
	{
		cerr << "unexpected error occur" << endl;
	}
	practiceenv.end();
	return 0;
}