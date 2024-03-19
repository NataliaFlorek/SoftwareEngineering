#include "TKsiazka.h"

int main(){
    TKsiazka *ksiazka = new TKsiazka("Ostatnie zyczenie");
    ksiazka->setData(21);
    ksiazka->printData();
    delete ksiazka;
    return 0;
}