//
// Created by herbertqiao on 1/20/16.
//

#ifndef GEANT4_INTRODUCTION_RUNACTION_H
#define GEANT4_INTRODUCTION_RUNACTION_H

#include <G4UserRunAction.hh>

class G4Run;

class RunAction : public G4UserRunAction {
public:
    RunAction();

    virtual ~RunAction();

    virtual G4Run *GenerateRun();

    virtual void EndOfRunAction(const G4Run *);
};

#endif //GEANT4_INTRODUCTION_RUNACTION_H
