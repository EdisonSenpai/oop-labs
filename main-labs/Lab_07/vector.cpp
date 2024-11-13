#include "vector.hpp"

template <class X>
Vector<X> :: Vector(int d, X *buf) {

        dim = d;
        buffer = new X[dim];

        for (int i = 0; i < d; i++)
            buffer[i] = buf[i];

}

template <class X>
Vector<X> :: ~Vector() {

    delete []buffer;

}

template <class X>
void Vector<X> :: afisare() {

        cout << "Vector dimension: " << dim << '\n';

        for (int i = 0; i < dim; i++)
            cout << buffer[i] << " ";

        cout << '\n';

}

template <class X>
void Vector<X> :: sortare() {

    for (int i = 0; i < dim - 1; i++)
        for (int j = i + 1; j < dim; j++) {

            if (buffer[i] > buffer[j]) {

                X aux = buffer[i];
                buffer[i] = buffer[j];
                buffer[j] = aux;

            }

        }

}

/*template <class X>
X suma (X a, X b) {

    return a + b;

}*/

namespace {

    void test() {

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

    }

}
