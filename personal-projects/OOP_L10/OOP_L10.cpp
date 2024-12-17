#include "Arena.h"
#include <iomanip>

void afiseazaTitlu() {
    const char* titlu = "Metin2: Remastered";
    int lungimeTitlu = strlen(titlu);
    int latimeChenar = lungimeTitlu + 4;

    std::cout << std::setfill('=') << std::setw(latimeChenar) << "=" << std::endl;
    std::cout << "= " << titlu << " =" << std::endl;
    std::cout << std::setfill('=') << std::setw(latimeChenar) << "=" << std::endl;
    std::cout << std::endl;
}

int main() {

    afiseazaTitlu();

    Echipa echipa1(5), echipa2(5);

    echipa1.adaugaCaracter(new Razboinic("Thor"));
    echipa1.adaugaCaracter(new Vrajitor("Gandalf"));

    echipa2.adaugaCaracter(new Ninja("Shadow"));
    echipa2.adaugaCaracter(new Asasin("Venom"));

    std::cout << "Echipa 1:\n";
    echipa1.afiseazaEchipa();

    std::cout << "\nEchipa 2:\n";
    echipa2.afiseazaEchipa();

    std::cout << "\nIncepe lupta!\n";

    Arena arena(&echipa1, &echipa2);
    arena.simuleazaLupta();
    arena.afiseazaRezultate();

    return 0;

}
