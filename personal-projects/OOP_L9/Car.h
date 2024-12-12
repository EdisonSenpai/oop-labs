#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

#include "ProjectLibs.h"

class Car {

protected:

	int fuelCapacity;
	int fuelConsumption;
	int averageSpeed[3];
	char* name;

public:

	virtual ~Car();

	virtual float GoCar(bool&, int, int) = 0;
	virtual char* getName() = 0;

};

#endif // !CAR_H_INCLUDED