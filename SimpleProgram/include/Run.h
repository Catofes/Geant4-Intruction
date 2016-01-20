//
// Created by herbertqiao on 1/20/16.
//

#ifndef GEANT4_INTRODUCTION_RUN_H
#define GEANT4_INTRODUCTION_RUN_H

#include <G4Run.hh>
#include <TTree.h>
#include <TFile.h>

class G4Event;

class Run : public G4Run {
public:
    Run();

    virtual ~Run();

    void initTree();

    void saveTree() const;

    void Fill();

    void AddEnergy(double first, double second);

private:
    TTree *_tree;
    TFile *_file;
    double _energyDisFirst;
    double _energyDisSecond;
};

#endif //GEANT4_INTRODUCTION_RUN_H
