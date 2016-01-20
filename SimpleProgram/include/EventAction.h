//
// Created by herbertqiao on 1/20/16.
//

#ifndef GEANT4_INTRODUCTION_EVENTACTION_H
#define GEANT4_INTRODUCTION_EVENTACTION_H

#include <G4UserEventAction.hh>

class EventAction : public G4UserEventAction {
public:
    EventAction();

    virtual ~EventAction();

    virtual void EndOfEventAction(const G4Event *event);

};

#endif //GEANT4_INTRODUCTION_EVENTACTION_H
