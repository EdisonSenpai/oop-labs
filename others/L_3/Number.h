#ifndef NUMBER_H_INCLUDED
#define NUMBER_H_INCLUDED

#pragma warning (disable : 4996)

#include <iostream>
#include <cstring>
#include <algorithm>
//#include <stdexcept>

using namespace std;

class Number {

private:

    //static const int MAX_DIGITS = 1000;
    char* value; // pointer to array holding the digits
    int base; // base of the number
    int digitsCount; // number of digits
    bool isNegative; // sign of the number

    long long convertToBaseTen(char* s, int base);
    char* convertToBase(long long n, int base);
    int normalizeDigit(char c);
    char formalizeDigit(int n);

public:

    Number(const char* value, int base); // where base is between 2 and 16
    ~Number();

    Number(const Number& other);
    Number(const Number&& other);
    Number(const int);

    //Number& operator=(const Number& other);
    Number& operator=(Number&& other);

    char operator[](int index);
    friend Number operator+(const Number& a, const Number& b);
    friend Number operator-(const Number& a, const Number& b);
    
    void operator--(int);
    void operator--();

    void operator= (const char*);
    void operator= (const Number& n);
    void operator= (int n);

    void operator+= (Number& n);

    bool operator==(const Number& other) const;
    bool operator!=(const Number& other) const;
    bool operator>(const Number& other) const;
    bool operator<(const Number& other) const;
    bool operator>=(const Number& other) const;
    bool operator<=(const Number& other) const;

    void SwitchBase(int newBase);
    void Print();
    int GetDigitsCount() const; // returns the number of digits for the current number
    int GetBase() const; // returns the current base
    long long GetBaseTen();

};

char* toString(long long);
void copyString(char*, char*);

#endif // !NUMBER_H_INCLUDED
