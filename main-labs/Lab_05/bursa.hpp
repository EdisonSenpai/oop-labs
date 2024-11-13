#ifndef BURSA_HPP_INCLUDED
#define BURSA_HPP_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class Bursa {

protected:

    int valoare;
    char *tip;

public:

    Bursa ();
    Bursa (int, char*);
    Bursa (const Bursa&);
    ~Bursa ();

    void set_valoare (int);
    int get_valoare ()const;

    Bursa &operator = (const Bursa&);

    friend istream &operator >> (istream&, Bursa&);
    friend ostream &operator << (ostream&, const Bursa&);

};

#endif // BURSA_HPP_INCLUDED
