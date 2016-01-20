//
// Created by herbertqiao on 1/20/16.
//

#include <TTree.h>
#include <iostream>
#include "Run.h"

Run::Run() : G4Run() {

}

Run::~Run() {
    _file->Close();
}

void Run::initTree() {
    std::cout << "Init Tree File." << std::endl;
    _file = new TFile("./out.root", "RECREATE");
    _tree = new TTree("simple_out", "Simple Out Tree");

    _tree->Branch("E1", &_energyDisFirst, "E1/D");
    _tree->Branch("E2", &_energyDisSecond, "E2/D");

}

void Run::saveTree() const {
    _tree->Write();
    _file->Close();

}

void Run::Fill() {
    G4cout<<_energyDisFirst<<" "<<_energyDisSecond<<G4endl;
    _tree->Fill();
    _energyDisFirst = 0;
    _energyDisSecond = 0;

}

void Run::AddEnergy(double first, double second) {
    _energyDisFirst += first;
    _energyDisSecond += second;
}
