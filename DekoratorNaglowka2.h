//
// Created by elim on 05/12/22.
//

#ifndef DECORATOR_DEKORATORNAGLOWKA2_H
#define DECORATOR_DEKORATORNAGLOWKA2_H


#include "DekoratorPotwierdzenia.h"

class DekoratorNaglowka2 : public DekoratorPotwierdzenia {
public:
    DekoratorNaglowka2(Component *c) : DekoratorPotwierdzenia(c) {}

    void drkNaglowek() {
        std::cout<<"NAGLOWEK 2"<<std::endl;
    }
    void drukuj() override {
        drkNaglowek();
        DekoratorPotwierdzenia::drukuj();
    }
};


#endif //DECORATOR_DEKORATORNAGLOWKA2_H
