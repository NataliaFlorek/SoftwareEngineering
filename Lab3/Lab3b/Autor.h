//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Autor.h
//  @ Date : 17.03.2024
//  @ Author : 
//
//


#if !defined(_AUTOR_H)
#define _AUTOR_H
#include <string>

using namespace std;

class Ksiazka;

class Autor {
public:
	void setKsiazka(Ksiazka* ksiazka);
	void setImie(string imie);
	void setNazwisko(string nazwisko);
	Ksiazka* getKsiazka();
	string getImie();
	string getNazwisko();
private:
	Ksiazka* tKsiazka;
	string tImie;
	string tNazwisko;
};

#endif  //_AUTOR_H
