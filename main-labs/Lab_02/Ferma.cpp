#include "Ferma.hpp"

Ferma :: Ferma () {

    nume = NULL;
    ferma = NULL;
    strcpy (adresa, "");
    nr_animale = 0;

}

Ferma :: ~Ferma () {

    delete []nume;
    delete []ferma;

}

void Ferma :: modif (const char *n, const char *f, const char a[], int nr) {

    if (nume != NULL) {

        delete []nume;
    }

    nume = new char[strlen(n) + 1];
    strcpy (nume, n);

    if (ferma != NULL) {

        delete []ferma;
    }

    ferma = new char[strlen(f) + 1];
    strcpy (ferma, f);

    strcpy (adresa, a);
    nr_animale = nr;

}

void Ferma :: modif (const Ferma &obj) {

    if (nume != NULL) {

        delete []nume;
    }

    nume = new char[strlen(obj.nume) + 1];
    strcpy (nume, obj.nume);

    if (ferma != NULL) {

        delete []ferma;
    }

    ferma = new char[strlen(obj.ferma) + 1];
    strcpy (ferma, obj.ferma);

    strcpy (adresa, obj.adresa);
    nr_animale = obj.nr_animale;

}

void Ferma :: afisare () {

    cout << "Nume= " << nume << '\n';
    cout << "Ferma= " << ferma << '\n';
    cout << "Adresa= " << adresa << '\n';
    cout << "Animale= " << nr_animale << '\n';
    cout << '\n';

}

const char *Ferma :: getNume () {

    return nume;

}

int Ferma :: getAnimal () {

    return nr_animale;

}
