#include "Number.h"

// constructor
Number::Number(const char* value, int base) {

    this->value = new char[strlen(value)];
    memcpy(this->value, value, strlen(value) + 1);
    this->base = base;
    isNegative = value[0] == '-';

}
// destructor
Number::~Number() {

    delete[] value;

}

// SwitchBase method
void Number::SwitchBase(int newBase) {

    long long n = convertToBaseTen(value, base);
    char* newValue = convertToBase(n, newBase);

    value = newValue;
    base = newBase;

}

// Print method
void Number::Print() {

    for (auto i = 0; value[i] != '\0'; i++)
        cout << value[i];
  
    cout << '\n';

}

// GetDigitsCount method
int Number::GetDigitsCount()const {

    return strlen(value) - (isNegative ? 1 : 0); 
    /* 
        The method will return the number of digits from 'value' and decrease 
        with 1 it if the number is negative or 0 if it's pozitive 0 
     */
}

// GetBase method
int Number::GetBase()const
{
    return base;
}

// GetBaseTen method
long long Number::GetBaseTen() {

    long long n = convertToBaseTen(value, base);

    return isNegative ? -n : n;

    /*
        The method converts a long long number to base 10 and return its value
        with its sign after verfication
    */

}

// convertToBaseTen method
long long Number::convertToBaseTen(char* s, int base) {

    if (s == nullptr) {
        // Handle the error
        return 0;
    }

    long long n = 0, p = 1;
    for (auto i = strlen(s) - 1; i >= (int)isNegative; i--) {
        n += normalizeDigit(s[i]) * p;
        p *= base;
    }

    return n;

    /*
        The method converts a number from its current base to base 10
        Uses the 'normalizeDigit' for the hexa value
    */

}

// convertToBase method
char* Number::convertToBase(long long n, int base) {

    char* c = new char[50];
    int i = 0;

    while (n != 0) {

        int d = n % base;
        c[i++] = formalizeDigit(d);

        n /= base;

    }

    if (isNegative) {

        c[i++] = '-';

    }

    c[i] = '\0';

    for (int l = 0; l < i / 2; l++) {

        char aux = c[l];
        c[l] = c[i - l - 1];
        c[i - l - 1] = aux;

    }

    return c;

    /*
        This method helps the user to formalize and covert the given number to any
        base
    */

}

// normalizeDigit method
int Number::normalizeDigit(char c) {

    return c >= 'A' ? c - 'A' + 10 : c - '0';

}

// formalizeDigit method
char Number::formalizeDigit(int n) {

    return n >= 10 ? 'A' + (n - 10) : '0' + n;

}

// copy constructor
Number::Number(const Number& other) {

    base = other.base;
    //digitsCount = other.digitsCount;
    value = other.value;
    isNegative = other.isNegative;

}

// move constructor
Number::Number(const Number&& other) {

    base = other.base;
    digitsCount = other.digitsCount;
    value = other.value;
    //other.value = nullptr;
    //other.digitsCount = 0;
    isNegative = other.isNegative;

}

// constructor for a given int
Number::Number(const int n) {

    base = 10;
    value = toString(n);
    bool b = n < 0;
    isNegative = b;

}

// copyString function
void copyString(char* a, char* b) {

    b = new char[strlen(a)];

    for (int i = 0; i < strlen(a); i++) {

        b[i] = a[i];

    }

    /*
        A private member function which copy the string from source (a) to its destnation (b)
    */

}

// copy assignment operator
void Number::operator=(int n) {

    Number nr(toString(n), 10);
    nr.SwitchBase(base);
    *this = nr;

}

// move assignment operator
Number& Number::operator=(Number&& other) {

    if (this != &other) {

        base = other.base;
        //digitsCount = other.digitsCount;
        value = other.value;
        //other.value = nullptr;
        //other.digitsCount = 0;
        isNegative = other.isNegative;

    }

    return *this;

}

// addition operator
Number operator+(const Number& a, const Number& b) {

    /*int base = max(a.base_, b.base_);
    char* result = new char[max(a.digitsCount_, b.digitsCount_) + 2];
    int carry = 0;

    int i = a.digitsCount_ - 1;
    int j = b.digitsCount_ - 1;
    int k = 0;

    while (i >= 0 || j >= 0 || carry > 0) {

        int sum = carry;

        if (i >= 0) {

            sum += (a.value_[i] >= 'A' && a.value_[i] <= 'F') ? a.value_[i] - 'A' + 10 : a.value_[i] - '0';
            i--;

        }

        if (j >= 0) {

            sum += (b.value_[j] >= 'A' && b.value_[j] <= 'F') ? b.value_[j] - 'A' + 10 : b.value_[j] - '0';
            j--;

        }

        result[k] = (sum % base < 10) ? sum % base + '0' : sum % base - 10 + 'A';

        carry = sum / base;

        k++;

    }

    result[k] = '\0';
    reverse(result, result + k);

    Number res(result, base);

    delete[] result;

    return res;*/

    Number x = a;
    Number y = b;
    int biggestBase = x.GetBase() > y.GetBase() ? x.GetBase() : y.GetBase();

    long long nr = x.GetBaseTen();
    nr += y.GetBaseTen();

    char* c = toString(nr);

    Number newNumber(c, 10);

    newNumber.SwitchBase(biggestBase);

    return newNumber;

    /*
        An easier method to override operator +, using the methods from class
        at its advantage
    */

}

// subtraction operator
Number operator-(const Number& a, const Number& b) {

    /*int base = max(a.base_, b.base_);
    char* result = new char[max(a.digitsCount_, b.digitsCount_) + 2];
    int borrow = 0;

    int i = a.digitsCount_ - 1;
    int j = b.digitsCount_ - 1;
    int k = 0;

    while (i >= 0 || j >= 0) {

        int diff = borrow;

        if (i >= 0) {

            diff += (a.value_[i] >= 'A' && a.value_[i] <= 'F') ? a.value_[i] - 'A' + 10 : a.value_[i] - '0';
            i--;

        }

        if (j >= 0) {

            diff -= (b.value_[j] >= 'A' && b.value_[j] <= 'F') ? b.value_[j] - 'A' + 10 : b.value_[j] - '0';
            j--;

        }

        if (diff < 0) {

            diff += base;
            borrow = -1;

        }
        else
            borrow = 0;

        result[k] = (diff < 10) ? diff + '0' : diff - 10 + 'A';

        k++;

    }

    while (k > 1 && result[k - 1] == '0')
        k--;

    result[k] = '\0';

    reverse(result, result + k);

    Number res(result, base);

    delete[] result;

    return res;*/

    Number x = a;
    Number y = b;
    int biggestBase = x.GetBase() > y.GetBase() ? x.GetBase() : y.GetBase();

    long long nr = x.GetBaseTen();
    nr += y.GetBaseTen();

    char* c = toString(nr);

    Number newNumber(c, 10);

    newNumber.SwitchBase(biggestBase);

    return newNumber;

    /*
        An easier method to override operator -, using the methods from class
        at its advantage
    */

}

// assignment operator for string
void Number::operator=(const char* s) {

    Number nr(s, 10);
    *this = nr;

}

// // assignment operator for 'Number' type
void Number::operator=(const Number& n) {

    base = n.base;
    value = n.value;
    isNegative = n.isNegative;

}

// plus assignment operator
void Number::operator+=(Number& n) {

    long long n1 = GetBaseTen();
    n1 += n.GetBaseTen();
    bool b = n1 < 0;

    toString(n1);

    value = toString(n1);

    isNegative = b;

    SwitchBase(base);

}

// less than operator
bool Number::operator<(const Number& other) const {
    if (base != other.base) {
        return base < other.base;
    }
    if (digitsCount != other.digitsCount) {
        return digitsCount < other.digitsCount;
    }
    for (int i = digitsCount - 1; i >= 0; i--) {
        if (value[i] != other.value[i]) {
            return value[i] < other.value[i];
        }
    }
    return false;  // The two numbers are equal
}

// greater than operator
bool Number::operator>(const Number& other) const {
    if (base != other.base) {
        return base > other.base;
    }
    if (digitsCount != other.digitsCount) {
        return digitsCount > other.digitsCount;
    }
    for (int i = digitsCount - 1; i >= 0; i--) {
        if (value[i] != other.value[i]) {
            return value[i] > other.value[i];
        }
    }
    return false; // The two numbers are equal
}

// less than or equal to operator
bool Number::operator<=(const Number& other) const {
    if (base != other.base) {
        return base < other.base;
    }
    if (digitsCount != other.digitsCount) {
        return digitsCount < other.digitsCount;
    }
    for (int i = digitsCount - 1; i >= 0; i--) {
        if (value[i] != other.value[i]) {
            return value[i] < other.value[i];
        }
    }
    return true;  // The two numbers are equal or the current object is less than the other object
}

// greater than or equal to operator
bool Number::operator>=(const Number& other)const {
    if (base != other.base) {
        return base > other.base;
    }
    if (digitsCount != other.digitsCount) {
        return digitsCount > other.digitsCount;
    }
    for (int i = digitsCount - 1; i >= 0; i--) {
        if (value[i] != other.value[i]) {
            return value[i] > other.value[i];
        }
    }
    return true; // The two numbers are equal or the current object is greater than the other object
}

// equal to operator
bool Number::operator==(const Number& other) const {
    if (base != other.base || digitsCount != other.digitsCount) {
        return false;
    }
    for (int i = 0; i < digitsCount; i++) {
        if (value[i] != other.value[i]) {
            return false;
        }
    }
    return true; // The two numbers are equal
}

// not equal to operator
bool Number::operator!=(const Number& other) const {
    return !(*this == other);
}

// postfix operator
void Number::operator--() {

    value++;

}

// prefix operator
void Number::operator--(int) {

    value[strlen(value) - 1] = '\0';

}

// index operator
char Number::operator[](int index) {

    /*if (index < 0 || index >= digitsCount) {
        return '\0';
    }
    return value[digitsCount - index - 1];*/

    return value[index];

}

// toString function convertor
char* toString(long long n) {

    char* s = new char[50];
    int i = 0;

    bool b = false;
    if (n < 0) {
        n = -n;
        b = true;
    }

    while (n != 0) {
        int d = n % 10;

        s[i++] = '0' + d;

        n /= 10;
    }

    if (b) {
        s[i++] = '-';
    }

    s[i] = '\0';

    for (int l = 0; l < i / 2; l++) {
        char aux = s[l];
        s[l] = s[i - l - 1];
        s[i - l - 1] = aux;
    }

    return s;

}