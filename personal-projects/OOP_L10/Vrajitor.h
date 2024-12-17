#ifndef VRAJITOR_H
#define VRAJITOR_H

#include "Caracter.h"

class Vrajitor : public Caracter {
public:
    Vrajitor(const char* nume);

    void folosesteAbilitate() override;
    void afisareDetalii(std::ostream& out) const override;
};

#endif // VRAJITOR_H
