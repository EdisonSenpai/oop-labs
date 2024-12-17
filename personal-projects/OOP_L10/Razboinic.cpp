#include "Razboinic.h"
#include <iostream>

Razboinic::Razboinic(const char* nume) : Caracter(nume, 150, 50, 30) {}

void Razboinic::folosesteAbilitate() {

    atac += 15;
    std::cout << nume << " foloseste furia razboinicului! Atacul creste la " << atac << ".\n";

}

void Razboinic::afisareDetalii(std::ostream& out) const {

    out << "Razboinic: " << nume << " | Viata: " << viata
        << " | Atac: " << atac << " | Aparare: " << aparare << "\n";

}
