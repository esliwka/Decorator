//
// Created by elim on 05/12/22.
//

#ifndef DECORATOR_KONFIGURACJA_H
#define DECORATOR_KONFIGURACJA_H


#include "Potwierdzenie.h"
#include "DekoratorNaglowka2.h"
#include "DekoratorStopki2.h"
#include "DekoratorNaglowka1.h"
#include "DekoratorStopki1.h"
#include "DekoratorPotwierdzenia.h"


class Konfiguracja {
public:
    void pobierzPotwierdzenie1() {
        DekoratorPotwierdzenia *p = new DekoratorPotwierdzenia(new DekoratorNaglowka1(new DekoratorStopki2(new DekoratorStopki1(new Potwierdzenie))));
        p->drukuj();
    }
    void pobierzPotwierdzenie2() {
        DekoratorPotwierdzenia *p =  new DekoratorPotwierdzenia(new DekoratorNaglowka1(new DekoratorNaglowka2(new DekoratorStopki1(new Potwierdzenie))));
        p->drukuj();
    }
};


#endif //DECORATOR_KONFIGURACJA_H
