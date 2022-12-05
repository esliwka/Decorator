#include <iostream>
#include "Konfiguracja.h"


int main() {
    Konfiguracja *k = new Konfiguracja;
    k->pobierzPotwierdzenie1();
    std::cout<<"-------------------------------------------------"<<std::endl;
    k->pobierzPotwierdzenie2();
    return 0;
}