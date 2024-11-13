#ifndef NR_COMPLEX_HPP
#define NR_COMPLEX_HPP

#include <iostream>
#include <cmath>

using namespace std;

class Nr_complex {

private:

    int real;
    int imaginar;

public:

    Nr_complex(int r = 0, int i = 0);
    Nr_complex(const Nr_complex&);
    Nr_complex &operator = (const Nr_complex&);

    double getValoare()const;
    bool operator > (const Nr_complex&);
    friend std::ostream &operator << (std::ostream&, const Nr_complex&);

};

#endif // NR_COMPLEX_HPP
