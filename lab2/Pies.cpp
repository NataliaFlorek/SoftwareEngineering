//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Pies.cpp
//  @ Date : 05.03.2024
//  @ Author : 
//
//

#include <string>
#include "Pies.h"
#include <iostream>
using namespace std;
Pies::Pies(string rasa, float waga){
    this->rasa = rasa;
    this->waga = waga;
}

Pies::~Pies() {

}

void Pies::ustawRase(string rasa) {
    this->rasa = rasa;
}

void Pies::ustawWage(float waga) {
    this->waga = waga;
}

string Pies::pokazRase() {
    return rasa;
}

float Pies::pokazWage() {
    return waga;
}

void Pies::biegaj() {
    cout << "Pies biega." << endl;
}

void Pies::szczekaj() {
    cout << "Pies szczeka." << endl;
}

