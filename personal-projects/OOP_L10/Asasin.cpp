#include "Asasin.h"
#include <iostream>

Asasin::Asasin(const char* nume)
    : Caracter(nume, 110, 60, 20) {}

void Asasin::folosesteAbilitate() {
    aparare += 20;
    std::cout << nume << " foloseste evitarea! Apararea creste temporar la " << aparare << ".\n";
}

void Asasin::afisareDetalii(std::ostream& out) const {
    out << "Asasin: " << nume << " | Viata: " << viata
        << " | Atac: " << atac << " | Aparare: " << aparare << "\n";
}
