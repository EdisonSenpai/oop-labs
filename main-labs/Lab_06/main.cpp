#include "oras.hpp"

int main() {

    Locuinta v[10];
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++) {

        v[i] = Locuitor ("Protectie", i + 1, "SoareleRasare", a[i], "Mircea")

    }

    Oras c(v, 10, "Vadim");

    return 0;

}
