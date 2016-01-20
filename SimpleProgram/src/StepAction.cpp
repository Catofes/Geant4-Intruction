//
// Created by herbertqiao on 1/20/16.
//

#include <G4StepPoint.hh>
#include <Run.h>
#include <G4RunManager.hh>
#include <G4SystemOfUnits.hh>
#include "StepAction.h"

SteppingAction::SteppingAction() : G4UserSteppingAction() {

}

SteppingAction::~SteppingAction() {

}

void SteppingAction::UserSteppingAction(const G4Step *aStep) {
    G4StepPoint *endPoint = aStep->GetPostStepPoint();
    G4StepPoint *startPoint = aStep->GetPreStepPoint();
    Run *run = static_cast<Run *>(
            G4RunManager::GetRunManager()->GetNonConstCurrentRun());
    double energy = aStep->GetTotalEnergyDeposit();
    //G4cout<<"hh "<<startPoint->GetPosition().x()<<" "<<endPoint->GetPosition().x()<<" "<<energy<<G4endl;
    if (startPoint->GetPosition().x() >= 0 * mm && startPoint->GetPosition().x() < 0.1 * mm) {
        run->AddEnergy(energy, 0);
    }
    else if (startPoint->GetPosition().x() >= 0.1 * mm && startPoint->GetPosition().x() < 1.1 * mm) {
        run->AddEnergy(0, energy);
    }
}
