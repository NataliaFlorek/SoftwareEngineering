#include <iostream>
#include "NaliczanieOprocentowania.h"

int main() {
    NaliczanieOprocentowania *naliczanieOprocentowania = new NaliczanieOprocentowania();
    unsigned int typ;
    double kwota;
    std::cout << "Frank(1), Euro(2), Jen(3), Dolar(4): ";
    std::cin >> typ;
    std::cout << "Kwota w zlotych: ";
    std::cin >> kwota;
    naliczanieOprocentowania->setStrategia(typ, kwota);
    naliczanieOprocentowania->contexInterface();
    return 0;
}
