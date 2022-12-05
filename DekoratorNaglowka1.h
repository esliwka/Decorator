//
// Created by elim on 05/12/22.
//

#ifndef DECORATOR_DEKORATORNAGLOWKA1_H
#define DECORATOR_DEKORATORNAGLOWKA1_H


#include "DekoratorPotwierdzenia.h"

class DekoratorNaglowka1 : public DekoratorPotwierdzenia{
public:
    DekoratorNaglowka1(Component *c) : DekoratorPotwierdzenia(c) {}

    void drkNaglowek() {
        std::cout<<"NAGLOWEK 1"<<std::endl;
    }
    void drukuj() override {
        drkNaglowek();
        DekoratorPotwierdzenia::drukuj();
    }
};


#endif //DECORATOR_DEKORATORNAGLOWKA1_H
