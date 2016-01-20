//
// Created by herbertqiao on 1/20/16.
//

#ifndef GEANT4_INTRODUCTION_PRIMARYGENERATORACTION_H
#define GEANT4_INTRODUCTION_PRIMARYGENERATORACTION_H

#include <G4VUserPrimaryGeneratorAction.hh>

class G4ParticleGun;

class TRandom;

class PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction {
public:
    PrimaryGeneratorAction();

    virtual ~PrimaryGeneratorAction();

    virtual void GeneratePrimaries(G4Event *);

private:
    G4ParticleGun *_gun; // pointer a to G4 gun class
    TRandom *_rand;
};

#endif //GEANT4_INTRODUCTION_PRIMARYGENERATORACTION_H
