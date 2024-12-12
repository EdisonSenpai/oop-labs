#include "Arena.h"

Arena::Arena(Echipa* e1, Echipa* e2) : echipa1(e1), echipa2(e2) {}

void Arena::simuleazaLupta() {
    bool echipa1Ataca = true; // Indica cine ataca in acest tur

    while (!echipa1->esteInvinsa() && !echipa2->esteInvinsa()) {
        if (echipa1Ataca) {
            Caracter* atacant1 = echipa1->getCaracterNeeliminat();
            Caracter* atacant2 = echipa2->getCaracterNeeliminat();

            if (atacant1 && atacant2) {
                atacant1->folosesteAbilitate();
                int damage1 = atacant1->getAtac();
                atacant2->primesteDaune(damage1);

                std::cout << atacant1->getName() << " ataca pe " << atacant2->getName()
                    << " si provoaca " << damage1 << " daune.\n";

                if (atacant2->esteEliminat()) {
                    std::cout << atacant2->getName() << " a fost eliminat!\n";
                }
            }
        }
        else {
            Caracter* atacant2 = echipa2->getCaracterNeeliminat();
            Caracter* atacant1 = echipa1->getCaracterNeeliminat();

            if (atacant2 && atacant1) {
                atacant2->folosesteAbilitate();
                int damage2 = atacant2->getAtac();
                atacant1->primesteDaune(damage2);

                std::cout << atacant2->getName() << " ataca pe " << atacant1->getName()
                    << " si provoaca " << damage2 << " daune.\n";

                if (atacant1->esteEliminat()) {
                    std::cout << atacant1->getName() << " a fost eliminat!\n";
                }
            }
        }

        // Schimba randul de atac
        echipa1Ataca = !echipa1Ataca;
    }
}


void Arena::afiseazaRezultate() const {
    if (echipa1->esteInvinsa()) {
        std::cout << "Echipa 2 castiga!\n";
    }
    else {
        std::cout << "Echipa 1 castiga!\n";
    }
}
