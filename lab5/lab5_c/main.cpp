#include "TKsiazka.h"
#include "TBiblioteka.h"

int main(){
    TKsiazka *ksiazka = new TKsiazka();
    TBiblioteka *biblioteka = new TBiblioteka();
    ksiazka->setAutor("Andrzej Sapkowski");
    ksiazka->setTytul("Ostatnie zyczenie");
    ksiazka->setData(15);
    ksiazka->printData();
    biblioteka->attach(ksiazka);
    biblioteka->setData(0, "Ostatnie zyczenie", "Andrzej Sapkowski");
    biblioteka->printData(0);
    biblioteka->attach(ksiazka);
    biblioteka->setData(1, "Miecz przeznaczenia", "Andrzej Sapkowski");
    biblioteka->printData(1);
    biblioteka->detach();
    biblioteka->detach();
    delete ksiazka;
    delete biblioteka;
    return 0;
}