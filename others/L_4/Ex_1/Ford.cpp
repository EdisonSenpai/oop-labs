#include "Ford.h"

Ford::Ford() {
	fuelCapacity = 70;
	fuelConsumption = 5;
	averageSpeed[Rain] = 50;
	averageSpeed[Sunny] = 60;
	averageSpeed[Snow] = 30;
	name = (char*)"Ford";
}

float Ford::GoCar(bool& b, int w, int circuitLength) {
	int speed = averageSpeed[w];

	float hours = fuelCapacity / fuelConsumption;
	float distance = hours * speed;

	b = distance > circuitLength;
	return (hours * circuitLength / distance);
}

char* Ford::getName() {
	return name;
}