#ifndef FRACTIE_HPP
#define FRACTIE_HPP

#include <iostream>

using namespace std;

class Fractie {

private:

    int a;
    int b;

public:

    Fractie(int aa = 0, int bb = 0);
    Fractie(const Fractie&);

    double getValoare()const;
    bool operator > (const Fractie&);
    friend std::ostream &operator << (std::ostream&, const Fractie&);

};

#endif // FRACTIE_HPP
