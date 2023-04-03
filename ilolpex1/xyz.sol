<?xml version = "1.0" encoding="UTF-8" standalone="yes"?>
<CPLEXSolution version="1.2">
 <header
   problemName="xyz"
   objectiveValue="8"
   solutionTypeValue="1"
   solutionTypeString="basic"
   solutionStatusValue="1"
   solutionStatusString="optimal"
   solutionMethodString="dual"
   primalFeasible="1"
   dualFeasible="1"
   simplexIterations="2"
   writeLevel="1"/>
 <quality
   epRHS="9.9999999999999995e-07"
   epOpt="9.9999999999999995e-07"
   maxPrimalInfeas="0"
   maxDualInfeas="0"
   maxPrimalResidual="0"
   maxDualResidual="0"
   maxX="2"
   maxPi="1.3333333333333333"
   maxSlack="0"
   maxRedCost="0"
   kappa="3"/>
 <linearConstraints>
  <constraint name="c1" index="0" status="LL" slack="0" dual="0.33333333333333337"/>
  <constraint name="c2" index="1" status="LL" slack="0" dual="1.3333333333333333"/>
 </linearConstraints>
 <variables>
  <variable name="x1" index="0" status="BS" value="1" reducedCost="0"/>
  <variable name="x2" index="1" status="BS" value="2" reducedCost="0"/>
 </variables>
 <objectiveValues>
  <objective index="0" name="z" value="8"/>
 </objectiveValues>
</CPLEXSolution>
