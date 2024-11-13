#include "Math.h"

int Math::Add(int a, int b) {

	return a + b;

}

int Math::Add(int a, int b, int c) {

	return a + b + c;

}

int Math::Add(double a, double b) {

	return static_cast<int>(a + b);

}

int Math::Add(double a, double b, double c) {

	return static_cast<int>(a + b + c);

}

int Math::Mul(int a, int b) {

	return a * b;

}

int Math::Mul(int a, int b, int c) {

	return a * b * c;

}

int Math::Mul(double a, double b) {

	return static_cast<int>(a * b);

}

int Math::Mul(double a, double b, double c) {

	return static_cast<int>(a * b * c);

}

int Math::Add(int count, ...) {

	va_list args;

	va_start(args, count);
	
	int sum = 0;

	for (int i = 0; i < count; i++)
		sum += va_arg(args, int);

	va_end(args);

	return sum;

}

char* Math::Add(const char* s1, const char* s2) {

	if (s1 == nullptr || s2 == nullptr)
		return nullptr;

	// Met I.Folosind <cstring>

	/* char* r = new char[strlen(s1) + strlen(s2) + 1]; */

	// Met II.Folosindndu-ne doar de biblioteca <iostream>

	int len1 = 0;

	while (s1[len1] != '\0')
		len1++;

	int len2 = 0;

	while (s2[len2] != '\0')
		len2++;

	char* result = new char[len1 + len2 + 1];

	for (int i = 0; i < len1; i++)
		result[i] = s1[i];

	for (int i = 0; i < len2; i++)
		result[len1 + i] = s2[i];

	result[len1 + len2] = '\0';

	return result;

}