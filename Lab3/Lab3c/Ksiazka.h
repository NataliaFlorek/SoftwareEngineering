//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Ksiazka.h
//  @ Date : 17.03.2024
//  @ Author : 
//
//


#if !defined(_KSIAZKA_H)
#define _KSIAZKA_H
#include <string>
using namespace std;

class Ksiazka {
public:
	void setAutor(string kautor);
	void setTytul(string ktytul);
	string getAutor();
	string getTytul();
private:
	string autor;
	string tytul;
};

#endif  //_KSIAZKA_H