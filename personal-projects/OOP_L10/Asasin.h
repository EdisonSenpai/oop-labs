#ifndef ASASIN_H
#define ASASIN_H

#include "Caracter.h"

class Asasin : public Caracter {
public:
    Asasin(const char* nume);

    void folosesteAbilitate() override;
    void afisareDetalii(std::ostream& out) const override;
};

#endif // ASASIN_H
