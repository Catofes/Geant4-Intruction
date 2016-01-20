//
// Created by herbertqiao on 1/20/16.
//

#include <RunAction.h>
#include "EventAction.h"
#include "StepAction.h"
#include "PrimaryGeneratorAction.h"
#include "ActionInitialization.h"

ActionInitialization::ActionInitialization() : G4VUserActionInitialization() {

}

ActionInitialization::~ActionInitialization() {

}

void ActionInitialization::BuildForMaster() const {
    SetUserAction(new RunAction);
}

void ActionInitialization::Build() const {
    SetUserAction(new PrimaryGeneratorAction);
    SetUserAction(new RunAction);
    SetUserAction(new EventAction);
    SetUserAction(new SteppingAction());
}
