#ifndef ARENA_H
#define ARENA_H

#include "Echipa.h"

#include "Razboinic.h"
#include "Vrajitor.h"
#include "Ninja.h"
#include "Asasin.h"

#include <iostream>

class Arena {
private:
    Echipa* echipa1;
    Echipa* echipa2;

public:
    Arena(Echipa* e1, Echipa* e2);

    void simuleazaLupta();
    void afiseazaRezultate() const;
};

#endif // ARENA_H
