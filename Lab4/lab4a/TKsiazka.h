//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : TKsiazka.h
//  @ Date : 19.03.2024
//  @ Author : 
//
//


#if !defined(_TKSIAZKA_H)
#define _TKSIAZKA_H
#include <string>
using namespace std;

class TStrona;

class TKsiazka {
public:
	TKsiazka(string tTytul);
	~TKsiazka();
	void printData();
	void setData(int tNrStrony);
private:
	TStrona* strona;
	string tytul;
};

#endif  //_TKSIAZKA_H