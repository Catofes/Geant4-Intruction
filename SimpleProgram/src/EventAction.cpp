//
// Created by herbertqiao on 1/20/16.
//

#include <Run.h>
#include <G4RunManager.hh>
#include "EventAction.h"

EventAction::EventAction() : G4UserEventAction() {

}

EventAction::~EventAction() {

}

void EventAction::EndOfEventAction(const G4Event *event) {
    Run *run = static_cast<Run *>(
            G4RunManager::GetRunManager()->GetNonConstCurrentRun());
    run->Fill();
}
