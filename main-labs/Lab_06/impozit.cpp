#include "impozit.hpp"

Impozit :: Impozit () {

    taxe = NULL;
    nr_taxe = 0;

}

Impozit :: Impozit (int *tx, int nr_tx) {

    this -> taxe = new int[nr_tx];

    if (!taxe) {

        printf ("Allocation failed!");
        exit (-1);

    }

    for (int i = 0; i < nr_tx; i++)
        taxe[i] = tx[i];

    this -> nr_taxe = nr_tx;

}

Impozit :: Impozit (const Impozit &obj) {

    this -> taxe = new int[obj.nr_taxe];

    if (!taxe) {

        printf ("Allocation failed!");
        exit (-1);

    }

    for (int i = 0; i < obj.nr_taxe; i++)
        taxe[i] = obj.taxe[i];

    this -> nr_taxe = obj.nr_taxe;

}

Impozit :: ~Impozit () {

    delete []this -> taxe;

}
