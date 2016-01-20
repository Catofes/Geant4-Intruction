//
// Created by herbertqiao on 1/20/16.
//

#ifndef GEANT4_INTRODUCTION_SIMPLEPROGRAMDETECTORCONSTRUCTION_H
#define GEANT4_INTRODUCTION_SIMPLEPROGRAMDETECTORCONSTRUCTION_H

#include "G4VUserDetectorConstruction.hh"

class SimpleProgramDetectorConstruction: public G4VUserDetectorConstruction
{
public:
    SimpleProgramDetectorConstruction();
    virtual ~SimpleProgramDetectorConstruction();

    virtual G4VPhysicalVolume * Construct();
};


#endif //GEANT4_INTRODUCTION_SIMPLEPROGRAMDETECTORCONSTRUCTION_H
