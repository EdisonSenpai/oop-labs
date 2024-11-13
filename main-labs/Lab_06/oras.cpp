#include "oras.hpp"

Oras :: Oras () {

    locuitori = NULL;
    nr_locuitori = 0;
    primar = NULL;

}

Oras :: Oras (Locuitor *loc, int nr_loc, char *prim) {

    locuitori = new Locuitor[nr_loc];

    if (!locuitori) {

        printf ("Allocation failed!");
        exit (-1);

    }

    for (int i = 0; i < nr_loc; i++)
        locuitori[i] = loc[i];

    nr_locuitori = nr_loc;

    primar = new char[strlen(prim)+1];

    if (!primar) {

        printf ("Allocation failed!");
        exit (-1);

    }

    strcpy (primar, prim);

}

Oras& Oras :: operator = (const Oras &obj) {

    if (locuitori)
        delete []locuitori;

    locuitori = new Locuitor[obj.nr_locuitori];

    if (!locuitori) {

        printf ("Allocation failed!");
        exit (-1);

    }

    for (int i = 0; i < obj.nr_locuitori; i++)
        locuitori[i] = obj.locuitori[i];

    nr_locuitori = obj.nr_locuitori;

    if (primar)
        delete []primar;

    primar = new char[strlen(obj.primar)+1];

    if (!primar) {

        printf ("Allocation failed!");
        exit (-1);

    }

    strcpy (primar, obj.primar);

    return *this;

}

Oras :: Oras (const Oras &obj) {

    locuitori = NULL;
    primar = NULL;
    *this = obj;

}

Oras :: ~Oras () {

    delete []locuitori;
    delete []primar;

}

void Oras :: setNumePrimar () {


}
