//
// Created by herbertqiao on 1/20/16.
//

#ifndef GEANT4_INTRODUCTION_ACTIONINITIALIZATION_H
#define GEANT4_INTRODUCTION_ACTIONINITIALIZATION_H

#include <G4VUserActionInitialization.hh>

class ActionInitialization : public G4VUserActionInitialization {
public:
    ActionInitialization();

    virtual ~ActionInitialization();

    virtual void BuildForMaster() const;

    virtual void Build() const;
};

#endif //GEANT4_INTRODUCTION_ACTIONINITIALIZATION_H
