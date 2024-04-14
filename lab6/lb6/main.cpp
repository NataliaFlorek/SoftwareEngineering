#include <iostream>
#include <string>
#include <vector>
#include "User.h"
#include "System.h"

int main(){
    cout << "Podaj nazwe uzytkownika: ";
    string tID;
    cin >> tID;
    cout << "Podaj haslo: ";
    string tHaslo;
    cin >> tHaslo;
    System *system = new System();
    User *user = new User();
    user->setHaslo(tHaslo);
    user->setID(tID);
    if(system->authenticateUser(tHaslo, tID)){
        cout << "Zalogowano." << endl;
    } else {
        system->registerUser(tHaslo, tID);
        cout << "Zarejestrowano uzytkownika." << endl;
    }
    cout << "Podaj nazwe uzytkownika: ";
    cin >> tID;
    cout << "Podaj haslo: ";
    cin >> tHaslo;
    if(system->authenticateUser(tHaslo, tID)){
        cout << "Zalogowano." << endl;
    } else {
        system->registerUser(tHaslo, tID);
        cout << "Zarejestrowano uzytkownika." << endl;
    }
    delete user;
    delete system;
    return 0;
}
