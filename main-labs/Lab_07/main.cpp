#include "vector.hpp"

int main() {

    int a[2] = {2,1};
    double b[3] = {2.2, 0.7, -3.7};
    Fractie *c = nullptr;
    Nr_complex *d = nullptr;

    c = new Fractie[3];
    d = new Nr_complex[3];

    c[0] = Fractie(6,3);
    c[1] = Fractie(2,4);
    c[2] = Fractie(1,5);

    d[0] = Nr_complex(3,4);
    d[1] = Nr_complex(1,2);
    d[2] = Nr_complex(7,2);

    Vector<int> v1(2, a);
    Vector<double> v2(3, b);
    Vector<Fractie> v3(3, c);
    Vector<Nr_complex> v4(3, d);

    v1.afisare();
    v2.afisare();
    v3.afisare();
    v4.afisare();

    v1.sortare();
    v1.afisare();

    v2.sortare();
    v2.afisare();

    v3.sortare();
    v3.afisare();

    v4.sortare();
    v4.afisare();

    /*int x = 3, y = 4, z;
    double t = 5.0, u = 6.0, v;

    z = suma<int>(x,y);
    v = suma<double>(t,u);

    cout << '\n';
    cout << '\n' << z;
    cout << '\n' << v;*/

    return 0;

}
