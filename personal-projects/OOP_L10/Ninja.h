#ifndef NINJA_H
#define NINJA_H

#include "Caracter.h"

class Ninja : public Caracter {
public:
    Ninja(const char* nume);

    void folosesteAbilitate() override;
    void afisareDetalii(std::ostream& out) const override;
};

#endif // NINJA_H
