//
// Created by herbertqiao on 1/20/16.
//

#include <G4ParticleGun.hh>
#include <G4ParticleTable.hh>
#include <TRandom.h>
#include <G4SystemOfUnits.hh>
#include "PrimaryGeneratorAction.h"

PrimaryGeneratorAction::PrimaryGeneratorAction()
        : G4VUserPrimaryGeneratorAction(),
          _gun(0) {
    _gun = new G4ParticleGun();
    _rand = new TRandom();
}

PrimaryGeneratorAction::~PrimaryGeneratorAction() {

}

void PrimaryGeneratorAction::GeneratePrimaries(G4Event *event) {
    G4ParticleTable *particleTable = G4ParticleTable::GetParticleTable();
    G4ParticleDefinition *particle = particleTable->FindParticle("alpha");
    _gun->SetParticleDefinition(particle);
    _gun->SetParticleMomentumDirection(G4ThreeVector(1., 0., 0.));
    _gun->SetParticleEnergy(_rand->Rndm() * 50 * MeV);
    _gun->SetParticlePosition(G4ThreeVector(0, 0, 0));
    _gun->GeneratePrimaryVertex(event);
}
