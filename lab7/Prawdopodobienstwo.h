//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : prawdopodobienstwo.h
//  @ Date : 18.04.2024
//  @ Author : 
//
//


#if !defined(_PRAWDOPODOBIENSTWO_H)
#define _PRAWDOPODOBIENSTWO_H
class SymbolNewtona;
class Potega;

class Prawdopodobienstwo {
public:
	double obliczPrawdopodobienstwo(int k, int n, double p);
private:
	SymbolNewtona* kSymbolNewtona;
	Potega* kPotega;
	double q;
};

#endif  //_PRAWDOPODOBIENSTWO_H
