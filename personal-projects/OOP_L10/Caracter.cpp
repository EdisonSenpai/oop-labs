#include "Caracter.h"

Caracter::Caracter(const char* name, int viata, int atac, int aparare)
    : viata(viata), atac(atac), aparare(aparare) {

    this->nume = new char[strlen(name) + 1];
    strcpy(this->nume, name);

}

Caracter::Caracter(const Caracter& other)
    : viata(other.viata), atac(other.atac), aparare(other.aparare) {

    this->nume = new char[strlen(other.nume) + 1];
    strcpy(this->nume, other.nume);

}

Caracter& Caracter::operator=(const Caracter& other) {

    if (this != &other) {

        delete[] nume;
        this->nume = new char[strlen(other.nume) + 1];
        strcpy(this->nume, other.nume);

        this->viata = other.viata;
        this->atac = other.atac;
        this->aparare = other.aparare;

    }

    return *this;

}

Caracter::~Caracter() {

    if (nume) {

        delete[] nume;
        nume = nullptr;

    }

}

bool Caracter::esteEliminat() const {

    return viata <= 0;

}

void Caracter::primesteDaune(int daune) {

    int damage = daune - aparare;

    if (damage > 0) {

        viata -= damage;

    }

}

const char* Caracter::getName() const {

    return nume;

}

int Caracter::getAtac() const {

    return atac;

}

std::ostream& operator<<(std::ostream& out, const Caracter& c) {

    out << "Caracter: " << c.nume << " (Viata: " << c.viata
        << ", Atac: " << c.atac << ", Aparare: " << c.aparare << ")\n";

    return out;

}
