//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : prawdopodobienstwo.cpp
//  @ Date : 18.04.2024
//  @ Author : 
//
//


#include "Prawdopodobienstwo.h"
#include "SymbolNewtona.h"
#include "Potega.h"

double Prawdopodobienstwo::obliczPrawdopodobienstwo(int k, int n, double p) {
    kSymbolNewtona = new SymbolNewtona();
    kPotega = new Potega();
    if(p < 0 || p > 1) {
        cout <<  "p musi byc z przedzialu [0, 1]" << endl;
    }
    q = 1 - p;
    return kSymbolNewtona->obliczSymbolNewtona(n, k) * kPotega->obliczPotege(p, k) * kPotega->obliczPotege(q, n - k);
}
