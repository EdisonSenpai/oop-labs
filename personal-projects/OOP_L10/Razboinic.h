#ifndef RAZBOINIC_H
#define RAZBOINIC_H

#include "Caracter.h"

class Razboinic : public Caracter {
public:
    Razboinic(const char* nume);

    void folosesteAbilitate() override;
    void afisareDetalii(std::ostream& out) const override;
};

#endif // RAZBOINIC_H
