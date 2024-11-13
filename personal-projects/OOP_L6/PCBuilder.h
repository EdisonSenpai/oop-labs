#ifndef PCBUILDER_H
#define PCBUILDER_H

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// Include toate clasele în namespace-ul PCBuilder
namespace PCBuilder {

	#include "Device.h"
	#include "Component.h"
	#include "CPU.h"
	#include "GPU.h"
	#include "Peripheral.h"
	#include "Computer.h"

}

#endif // PCBUILDER_H