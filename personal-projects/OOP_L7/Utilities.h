#ifndef UTILITIES_H
#define UTILITIES_H

#include <cstring>

#pragma warning (disable : 4996)

inline void deepCopy(char*& dest, const char* src) {

    delete[] dest; // Asiguram ca memoria anterioara este eliberata

    if (src) {

        dest = new char[strlen(src) + 1];
        strcpy(dest, src);

    }
    else {

        dest = nullptr;

    }

}

#endif // UTILITIES_H
