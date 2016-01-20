//
// Created by herbertqiao on 1/20/16.
//

#include "RunAction.h"
#include "Run.h"

RunAction::RunAction() : G4UserRunAction() {

}

RunAction::~RunAction() {

}

G4Run *RunAction::GenerateRun() {
    Run *r = new Run();
    r->initTree();
    return r;
}


void RunAction::EndOfRunAction(const G4Run *run) {
    const Run *localRun = static_cast<const Run *>(run);
    localRun->saveTree();
}
