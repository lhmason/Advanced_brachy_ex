//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
// Code developed by: S. Guatelli, D. Cutajar, J. Poder, 
//Centre For Medical Radiation Physics, University of Wollongong
//
//
//    ******************************************
//    *                                        *
//    *    BrachyDetectorConstructionGammaMed.hh  *
//    *                                        *
//    ******************************************
//
// 
//

#ifndef BrachyDetectorConstructionGammaMed_H
#define BrachyDetectorConstructionGammaMed_H 1

#include "globals.hh"
#include "G4VUserDetectorConstruction.hh"

class G4LogicalVolume;
class G4Tubs;
class G4Cons;
class G4VPhysicalVolume;
class BrachyMaterial;
class G4VisAttributes;

class BrachyDetectorConstructionGammaMed
{
public:
   BrachyDetectorConstructionGammaMed();
  ~BrachyDetectorConstructionGammaMed();

  void  ConstructGammaMed(G4VPhysicalVolume*);
  // Model the GammaMed iridium source

  void  CleanGammaMed(); 
  // Destroy the Iridium source in the experimental set-up

private:   
  G4Tubs* steel_shell;
  G4LogicalVolume* logical_steel_shell;    
  G4VPhysicalVolume* physical_steel_shell;

  G4Tubs* air_gap;
  G4LogicalVolume* logical_air_gap;
  G4VPhysicalVolume* physical_air_gap;

  G4Tubs* End1_steel_shell;
  G4LogicalVolume* logical_End1_steel_shell;
  G4VPhysicalVolume* physical_End1_steel_shell;

  G4Cons* End1cone_steel_shell;
  G4LogicalVolume* logical_End1cone_steel_shell;
  G4VPhysicalVolume* physical_End1cone_steel_shell;

  G4Cons* End2_steel_shell;
  G4LogicalVolume* logical_End2_steel_shell;
  G4VPhysicalVolume* physical_End2_steel_shell;

  G4Tubs* cable;
  G4LogicalVolume* logical_cable;
  G4VPhysicalVolume* physical_cable;
    
  G4Tubs* iridium_core;
  G4LogicalVolume* logical_iridium_core;
  G4VPhysicalVolume* physical_iridium_core;

  G4Tubs* metal_rod1;
  G4LogicalVolume* logical_metal_rod1;
  G4VPhysicalVolume* physical_metal_rod1;

  G4Tubs* metal_rod2;
  G4LogicalVolume* logical_metal_rod2;
  G4VPhysicalVolume* physical_metal_rod2;

  G4Tubs* metal_rod2bent;
  G4LogicalVolume* logical_metal_rod2bent;
  G4VPhysicalVolume* physical_metal_rod2bent;

  G4VisAttributes* steelAttributes;
  G4VisAttributes* endAttributes;
  G4VisAttributes* simpleIridiumVisAtt;
  G4VisAttributes* titaniumAttributes;
 
  BrachyMaterial* pMat;    
};
#endif








