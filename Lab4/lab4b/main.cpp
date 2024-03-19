#include "Plik.h"
#include "Folder.h"


int main(){
    Plik *plik = new Plik();
    Folder *folder = new Folder();
    folder->attach(plik);
    folder->setData(0, "zdjecie", "jpg");
    folder->printData(0);
    folder->attach(plik);
    folder->setData(1, "dane", "txt");
    folder->printData(1);
    folder->detach();
    folder->detach();
    delete plik;
    delete folder;
    return 0;
}