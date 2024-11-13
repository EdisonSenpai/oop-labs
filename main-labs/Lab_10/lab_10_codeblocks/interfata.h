#ifndef INTERFATA_H_INCLUDED
#define INTERFATA_H_INCLUDED

#include <iostream>

using namespace std;

class Interfata {

public:

	virtual ~Interfata() = 0;

	virtual int getArie() = 0;
	virtual bool isCerc() = 0;
	virtual void afisare() = 0;

};

#endif // INTERFATA_H_INCLUDED
