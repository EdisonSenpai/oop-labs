#include "locuitor.hpp"

Locuitor :: Locuitor () {

    nume = NULL;

}

Locuitor :: Locuitor (int *tx, int nr_tx, char *adr, int val, char *num) : Impozit (tx, nr_tx), Locuinta (adr, val) {

    this -> nume = new char[strlen(num)+1];
    strcpy (this -> nume, num);

}

Locuitor :: Locuitor (const Locuitor &obj) : Impozit(obj), Locuinta (obj){

    this -> nume = new char[strlen(obj.nume)+1];
    strcpy (this -> nume, obj.nume);

}

Locuitor :: ~Locuitor () {

    delete []this -> nume;

}
