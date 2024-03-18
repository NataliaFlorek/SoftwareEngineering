#include <iostream>
#include <string>
#include "Autor.h"
#include "Ksiazka.h"
using namespace std;

int main(){
    Autor *autor = new Autor;
    autor->setImie("Andrzej");
    autor->setNazwisko("Sapkowski");
    Ksiazka *ksiazka = new Ksiazka;
    ksiazka->setTytul("Ostatnie zyczenie");
    ksiazka->setAutor(autor);
    autor->setKsiazka(ksiazka);
    cout << autor->getKsiazka()->getAutor()->getImie() + " " + autor->getKsiazka()->getAutor()->getNazwisko() << endl;
    cout << autor->getKsiazka()->getTytul() << endl;
    delete autor;
    delete ksiazka;
    return 0;
}