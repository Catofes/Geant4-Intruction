//
// Created by herbertqiao on 1/20/16.
//

#ifndef GEANT4_INTRODUCTION_STEPACTION_H
#define GEANT4_INTRODUCTION_STEPACTION_H

#include "G4UserSteppingAction.hh"

class SteppingAction : public G4UserSteppingAction {
public:
    SteppingAction();

    virtual ~SteppingAction();

    virtual void UserSteppingAction(const G4Step *);

};

#endif //GEANT4_INTRODUCTION_STEPACTION_H
