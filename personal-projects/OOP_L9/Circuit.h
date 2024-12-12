#ifndef CIRCUIT_H_INCLUDED
#define CIRCUIT_H_INCLUDED

#include "ProjectLibs.h"

#include "Dacia.h"
#include "Toyota.h"
#include "Mercedes.h"
#include "Ford.h"
#include "Mazda.h"

class Circuit {

private:

	int circuitLength;

	Car* car[10];
	float timeToFinish[10];
	bool finish[10];

	int cars;
	int weather;

public:

	Circuit();

	void SetLength(int);
	void SetWeather(int);

	void AddCar(Car* c);

	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();

};

#endif // !CIRCUIT_H_INCLUDED
