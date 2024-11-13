#include "Ferma.hpp"

int main() {

    Ferma obj, *v;

    obj.modif ("A", "B", "C", 5);
    obj.afisare ();

    cout << '\n';

    v = new Ferma[5];

    for (int i = 0; i < 5; i++) {

        v[i].modif ("A", "B", "C", i + 1);

    }

    for (int i = 0; i < 5; i++) {

        v[i].afisare ();

    }

//    Ferma aux;
//
//    for (int i = 0; i < 4; i++)
//        for (int j = i; j < 5; j++)
//            if (v[i] > v[j]) {
//
//                aux.modif (v[i]);
//                v[i].modif (v[j]);
//                v[j].modif (aux);
//
//            }

    cout << v[0].getNume ();

    return 0;

}
