#include "Ninja.h"
#include <iostream>

Ninja::Ninja(const char* nume)
    : Caracter(nume, 100, 45, 25) {}

void Ninja::folosesteAbilitate() {
    atac *= 2;
    std::cout << nume << " foloseste atacul critic! Atacul este dublat la " << atac << " pentru urmatoarea lovitura.\n";
}

void Ninja::afisareDetalii(std::ostream& out) const {
    out << "Ninja: " << nume << " | Viata: " << viata
        << " | Atac: " << atac << " | Aparare: " << aparare << "\n";
}
