//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Potega.cpp
//  @ Date : 18.04.2024
//  @ Author : 
//
//


#include "Potega.h"

float Potega::obliczPotege(float podstawa, int wykladnik) {
    float wynik = 1;
    for (int i = 0; i < wykladnik; i++) {
        wynik *= podstawa;
    }
    return wynik;
}

