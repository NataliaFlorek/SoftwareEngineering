#include "Biblioteka.h"

int main(){
    Biblioteka *biblioteka = new Biblioteka("Biblioteka");
    biblioteka->setData("Ostatnie zyczenie", "Andrzej Sapkowski");
    biblioteka->printData();
    delete biblioteka;
    return 0;
}