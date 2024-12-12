#ifndef PATRAT_H
#define PATRAT_H

#include "Figura.h"

class Patrat : public Figura {
public:
    Patrat(const vector<Point>&);

    void afisare() const override;

};

#endif // PATRAT_H
