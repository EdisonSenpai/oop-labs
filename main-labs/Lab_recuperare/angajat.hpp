#ifndef ANGAJAT_HPP_INCLUDED
#define ANGAJAT_HPP_INCLUDED

#pragma warning (disable : 4996)
#pragma warning (disable : 6031)

#include <iostream>
#include <cstring>

using namespace std;

class Angajat {

private:

	int salariu;
	int varsta;
	char* nume;

public:

	Angajat();
	Angajat(int, int, const char*);
	virtual ~Angajat();

	virtual int getSalariu()const;
	virtual int getVarsta()const;
	virtual char* getNume()const;
	virtual void afisare();

};

#endif // !ANGAJAT_HPP_INCLUDED
