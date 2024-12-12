#ifndef CARACTER_H
#define CARACTER_H

#pragma warning (disable : 4996)

#include <iostream>
#include <cstring>

class Caracter {
protected:
    char* nume;
    int viata;
    int atac;
    int aparare;

public:
    Caracter(const char* name, int viata, int atac, int aparare);
    Caracter(const Caracter& other);
    Caracter& operator=(const Caracter& other);
    virtual ~Caracter();

    virtual void folosesteAbilitate() = 0;
    virtual void afisareDetalii(std::ostream& out) const = 0;

    bool esteEliminat() const;
    void primesteDaune(int daune);

    const char* getName() const;
    int getAtac() const;

    friend std::ostream& operator<<(std::ostream& out, const Caracter& c);
};

#endif // CARACTER_H
