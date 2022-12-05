//
// Created by elim on 05/12/22.
//

#ifndef DECORATOR_DEKORATORPOTWIERDZENIA_H
#define DECORATOR_DEKORATORPOTWIERDZENIA_H


#include "Component.h"

class DekoratorPotwierdzenia : public Component {
protected:
    Component *c;
public:
    DekoratorPotwierdzenia(Component *c) {
        this->c = c;
    }
    void drukuj() override {
        if(c != nullptr) {
            c->drukuj();
        }
    }
};


#endif //DECORATOR_DEKORATORPOTWIERDZENIA_H
