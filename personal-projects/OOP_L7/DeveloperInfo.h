#ifndef DEVELOPERINFO_H
#define DEVELOPERINFO_H

#include <iostream>
#include "Utilities.h"

class DeveloperInfo {

protected:
    char* developerName;

public:
    DeveloperInfo(const char* developerName = "");
    DeveloperInfo(const DeveloperInfo& other);
    DeveloperInfo& operator=(const DeveloperInfo& other);
    ~DeveloperInfo();

    void displayDeveloper() const;

    friend std::ostream& operator<<(std::ostream& out, const DeveloperInfo& developer);
    friend std::istream& operator>>(std::istream& in, DeveloperInfo& developer);

};

#endif // DEVELOPERINFO_H
