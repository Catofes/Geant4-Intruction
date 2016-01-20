//
// Created by herbertqiao on 1/20/16.
//

#include <G4NistManager.hh>
#include <G4Box.hh>
#include <G4SystemOfUnits.hh>
#include <G4PVPlacement.hh>
#include <G4LogicalVolume.hh>
#include "SimpleProgramDetectorConstruction.h"

SimpleProgramDetectorConstruction::SimpleProgramDetectorConstruction()
        : G4VUserDetectorConstruction() {

}

SimpleProgramDetectorConstruction::~SimpleProgramDetectorConstruction() {

}

G4VPhysicalVolume *SimpleProgramDetectorConstruction::Construct() {
    /* Get Material*/

    G4NistManager *nist = G4NistManager::Instance();
    G4Material *si = nist->FindOrBuildMaterial("G4_Si");
    G4Material *air = nist->FindOrBuildMaterial("G4_AIR");

    /*Set the Detector*/
    G4Box *solidWorld = new G4Box("World_Box",                       //its name
                                  1 * m, 1 * m, 1 * m);     //its size

    G4LogicalVolume *logicWorld =
            new G4LogicalVolume(solidWorld,          //its solid
                                air,                 //its material
                                "WorldLog");            //its name

    G4VPhysicalVolume *physWorld =
            new G4PVPlacement(0,                     //no rotation
                              G4ThreeVector(),       //at (0,0,0)
                              logicWorld,            //its logical volume
                              "World",               //its name
                              0,                     //its mother  volume
                              false,                 //no boolean operation
                              0,                     //copy number
                              true);                 //overlaps checking


    G4Box *solidDetector1 = new G4Box("Detector_1_Box", 0.05 * mm, 1 * m, 1 * m);
    G4LogicalVolume *logicDetector1 = new G4LogicalVolume(solidDetector1, si, "Detector1Log");
    new G4PVPlacement(0, G4ThreeVector(0.05, 0, 0) * mm, logicDetector1, "Detector1", logicWorld, false, 0, true);

    G4Box *solidDetector2 = new G4Box("Detector_2_Box", 0.5 * mm, 1 * m, 1 * m);
    G4LogicalVolume *logicDetector2 = new G4LogicalVolume(solidDetector2, si, "Detector2Log");
    new G4PVPlacement(0, G4ThreeVector(0.6, 0, 0) * mm, logicDetector2, "Detector2", logicWorld, false, 0, true);

    return physWorld;
}