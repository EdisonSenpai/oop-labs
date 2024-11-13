#ifndef FERMA_HPP_INCLUDED
#define FERMA_HPP_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class Ferma {

    char *nume;
    char *ferma;
    char adresa[25];
    int nr_animale;

public:

    Ferma ();
    Ferma (const char *n, const char *f, const char a[], int nr);
    ~Ferma ();

    void afisare ();
    void modif (const char *n, const char *f, const char a[], int nr);
    void modif (const Ferma &obj);

    int getAnimal (); //nr
    const char *getNume ();

};

#endif // FERMA_HPP_INCLUDED
