#include "Echipa.h"

Echipa::Echipa(int capacitateMax) : capacitate(capacitateMax), nrMembri(0) {
    
    membri = new Caracter*[capacitate];

    for (int i = 0; i < capacitate; i++) {

        membri[i] = nullptr;

    }
}

Echipa::~Echipa() {

    if (membri) {

        for (int i = 0; i < nrMembri; i++) {

            if (membri[i]) {

                membri[i] = nullptr;
                delete membri[i];

            }
        }

        membri = nullptr;
        delete[] membri;

    }

}

void Echipa::adaugaCaracter(Caracter* c) {

    if (nrMembri < capacitate) {

        membri[nrMembri++] = c;

    } 
    else {

        std::cerr << "Echipa este plina!\n";
    }

}

void Echipa::afiseazaEchipa() const {

    for (int i = 0; i < nrMembri; i++) {

        //std::cout << *membri[i]; // Afisare normala

        if (membri[i]) {

            membri[i]->afisareDetalii(std::cout); // Afisare detaliata

        }

    }

}

bool Echipa::esteInvinsa() const {
    for (int i = 0; i < nrMembri; i++) {

        if (!membri[i]->esteEliminat()) 
            return false;

    }

    return true;

}

Caracter* Echipa::getCaracterNeeliminat() {
    for (int i = 0; i < nrMembri; i++) {
        if (!membri[i]->esteEliminat()) return membri[i];
    }
    return nullptr;
}
