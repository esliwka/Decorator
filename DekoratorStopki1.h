//
// Created by elim on 05/12/22.
//

#ifndef DECORATOR_DEKORATORSTOPKI1_H
#define DECORATOR_DEKORATORSTOPKI1_H


#include "DekoratorPotwierdzenia.h"

class DekoratorStopki1 : public DekoratorPotwierdzenia {
public:
    DekoratorStopki1(Component *c) : DekoratorPotwierdzenia(c) {}

    void drkStopka() {
        std::cout<<"STOPKA 1"<<std::endl;
    }
    void drukuj() override {
        DekoratorPotwierdzenia::drukuj();
        drkStopka();
    }
};


#endif //DECORATOR_DEKORATORSTOPKI1_H
