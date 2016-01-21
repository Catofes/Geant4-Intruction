int Analyse() {
    TFile *f = new TFile("out.root");
    TTree *t = (TTree *) f->Get("simple_out");
    t->Draw("E1:E2");
}

