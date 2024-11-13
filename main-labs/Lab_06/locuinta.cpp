#include "locuinta.hpp"

Locuinta :: Locuinta () {

    adresa = NULL;
    valoare = 0;

}

Locuinta :: Locuinta (char *adr, int val) {

    this -> adresa = new char[strlen(adr)+1];

    if (!adresa) {

        printf ("Allocation failed!");
        exit (-1);

    }

    strcpy (this -> adresa, adr);

    this -> valoare = val;


}

Locuinta :: Locuinta (const Locuinta &obj) {

    this -> adresa = new char[strlen(obj.adresa)+1];

    if (!adresa) {

        printf ("Allocation failed!");
        exit (-1);

    }

    strcpy (this -> adresa, obj.adresa);

    this -> valoare = obj.valoare;

}

Locuinta :: ~Locuinta () {

    delete []this -> adresa;

}
