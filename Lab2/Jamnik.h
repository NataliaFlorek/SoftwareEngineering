//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Jamnik.h
//  @ Date : 05.03.2024
//  @ Author : 
//
//


#if !defined(_JAMNIK_H)
#define _JAMNIK_H

#include "Pies.h"

class Jamnik : public Pies {
public:
	Jamnik(float dlugosc, string umaszczenie);
	~Jamnik();
	Jamnik();
	void ustawDlugosc(float dlugosc);
	void ustawUmaszczenie(string umaszczenie);
	float pokazDlugosc();
	string pokazUmaszczenie();
	void kop();
	void trop();
protected:
	float dlugosc;
	string umaszczenie;
};

#endif  //_JAMNIK_H