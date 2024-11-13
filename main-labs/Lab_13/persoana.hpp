#ifndef PERSOANA_HPP_INCLUDED
#define PERSOANA_HPP_INCLUDED

#pragma warning (disable : 4996)
#pragma warning (disable : 6031)

using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

class Persoana {

private:

	int varsta;
	bool esteStudent;
	char* nume;

public:

	Persoana();
	Persoana(int, bool, const char*);
	Persoana(const Persoana&);
	~Persoana();

	bool isStudent();

	Persoana& operator =(const Persoana&);
	bool operator <(Persoana);

	void afisare();

};


#endif // !PERSOANA_HPP_INCLUDED
