//
// Created by elim on 05/12/22.
//

#ifndef DECORATOR_POTWIERDZENIE_H
#define DECORATOR_POTWIERDZENIE_H


#include "Component.h"

class Potwierdzenie : public Component {
public:
    void drukuj() override {
        std::cout<<"POTWIERDZENIE"<<std::endl;
    }
};


#endif //DECORATOR_POTWIERDZENIE_H
