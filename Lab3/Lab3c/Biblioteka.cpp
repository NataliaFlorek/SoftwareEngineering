//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Biblioteka.cpp
//  @ Date : 17.03.2024
//  @ Author : 
//
//

#include <iostream>
#include "Biblioteka.h"
#include <string>
using namespace std;
Biblioteka::Biblioteka(string kNazwa) {
    nazwa = kNazwa;
}

void Biblioteka::printData() {
    cout << tKsiazka.getAutor() << endl;
    cout << tKsiazka.getTytul() << endl;
}

void Biblioteka::setData(string kTytul, string kAutor) {
    tKsiazka.setAutor(kAutor);
    tKsiazka.setTytul(kTytul);
}

