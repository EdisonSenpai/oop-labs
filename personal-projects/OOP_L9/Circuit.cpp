#include "Circuit.h"

Circuit::Circuit() {
	circuitLength = 0;

	car[9] = {};
	timeToFinish[9] = {};
	finish[9] = {};

	cars = 0;
	weather = Sunny; //default
}

void Circuit::SetLength(int l) {
	circuitLength = l;
}

void Circuit::SetWeather(int w) {
	weather = w;
}

// --==
void Circuit::AddCar(Car* c) {
	if (cars < 10)
		car[cars++] = c;
}

void Circuit::Race() {
	for (int i = 0; i < cars; i++) {
		bool b = false;
		timeToFinish[i] = car[i]->GoCar(b, weather, circuitLength);
		finish[i] = b;
	}
}

void Circuit::ShowFinalRanks() {
	cout << "The time of the cars that are finished \n";
	for (int i = 0; i < cars; i++) {
		if (finish[i]) {
			cout << car[i]->getName() << " - " << timeToFinish[i] << "\n";
		}
	}
	cout << "\n";
}

void Circuit::ShowWhoDidNotFinish() {
	cout << "The time of the cars that are not finished \n";
	for (int i = 0; i < cars; i++) {
		if (!finish[i]) {
			cout << car[i]->getName() << " - " << timeToFinish[i] << " ";
		}
	}
	cout << "\n";
}