//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : User.h
//  @ Date : 09.04.2024
//  @ Author :
//
//


#if !defined(_USER_H)
#define _USER_H
#include <string>

using namespace std;

class User {
public:
	void setID(string tID);
	void setHaslo(string tHaslo);
	string getID();
	string getHaslo();
private:
	string ID;
	string Haslo;
};

#endif  //_USER_H
