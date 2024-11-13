#ifndef EROU_HPP_INCLUDED
#define EROU_HPP_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class Erou {

    char *nume;
    char abilitate[15];
    char *arma;
    int nr_vieti;

public:

    Erou ();
    Erou (const char*, const char[], const char*, const int);
    ~Erou ();
    Erou (const Erou&); //constructor copiere

    void afisare ();
    void modif (const char*, const char[], const char*, const int);
    char *getArma ();

    friend int getNrVieti (const Erou&);
    friend void interschimbare (Erou&, Erou&);
    friend char *getNume (const Erou&);

};

void isNull (void*);
void getLowHero (Erou*, int&, int&);
void sortAfterWeapon (Erou*);

#endif // EROU_HPP_INCLUDED
