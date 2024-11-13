#include "erou.hpp"

int main() {

    Erou obj ("Andrew", "fire", "sword", 20);

    obj.afisare ();

    Erou *v;

    v = new Erou[4];

    v[0].modif ("A", "B", "F", -2);
    v[1].modif ("A", "B", "E", 10);
    v[2].modif ("A", "B", "D", 3);
    v[3].modif ("A", "B", "C", -1);

    sortAfterWeapon (v);

    for (int i = 0; i < 4; i++)
        v[i].afisare ();

    int lowest = getNrVieti (v[0]);
    int lowest_poz = 1;

    getLowHero (v, lowest, lowest_poz);

    cout << "The hero with lowest lives is player " << lowest_poz << " with " << lowest << " lives.\n";

    delete []v;

    return 0;

}
