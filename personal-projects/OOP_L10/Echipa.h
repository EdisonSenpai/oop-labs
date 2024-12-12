#ifndef ECHIPA_H
#define ECHIPA_H

#include "Caracter.h"
#include <iostream>

class Echipa {
private:
    Caracter** membri;
    int capacitate;
    int nrMembri;

public:
    Echipa(int capacitateMax = 10);
    ~Echipa();

    void adaugaCaracter(Caracter* c);
    void afiseazaEchipa() const;
    bool esteInvinsa() const;

    Caracter* getCaracterNeeliminat();
};

#endif // ECHIPA_H
