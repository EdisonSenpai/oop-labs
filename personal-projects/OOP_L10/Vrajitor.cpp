#include "Vrajitor.h"
#include <iostream>

Vrajitor::Vrajitor(const char* nume) : Caracter(nume, 120, 40, 20) {}

void Vrajitor::folosesteAbilitate() {

    viata += 20;
    std::cout << nume << " foloseste vraja vindecatoare! Viata creste la " << viata << ".\n";

}

void Vrajitor::afisareDetalii(std::ostream& out) const {

    out << "Vrajitor: " << nume << " | Viata: " << viata
        << " | Atac: " << atac << " | Aparare: " << aparare << "\n";

}
