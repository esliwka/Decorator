//
// Created by elim on 05/12/22.
//

#ifndef DECORATOR_DEKORATORSTOPKI2_H
#define DECORATOR_DEKORATORSTOPKI2_H


#include "DekoratorPotwierdzenia.h"

class DekoratorStopki2 : public DekoratorPotwierdzenia {
public:
    DekoratorStopki2(Component *c) : DekoratorPotwierdzenia(c) {}

    void drkStopka() {
        std::cout<<"STOPKA 2"<<std::endl;
    }
    void drukuj() override {
        DekoratorPotwierdzenia::drukuj();
        drkStopka();
    }
};


#endif //DECORATOR_DEKORATORSTOPKI2_H
