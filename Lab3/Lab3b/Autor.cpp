//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Autor.cpp
//  @ Date : 17.03.2024
//  @ Author : 
//
//


#include "Autor.h"
#include <string>

using namespace std;

void Autor::setKsiazka(Ksiazka* ksiazka) {
    tksiazka = ksiazka;
}

void Autor::setImie(string imie) {
    timie = imie;
}

void Autor::setNazwisko(string nazwisko) {
    tnazwisko = nazwisko;
}

Ksiazka* Autor::getKsiazka() {
    return tksiazka;
}

string Autor::getImie() {
    return timie;
}

string Autor::getNazwisko() {
    return tnazwisko;
}
