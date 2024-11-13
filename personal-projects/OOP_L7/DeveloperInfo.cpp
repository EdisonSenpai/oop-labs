#include "DeveloperInfo.h"

DeveloperInfo::DeveloperInfo(const char* developerName) : developerName(nullptr) {
    
    deepCopy(this->developerName, developerName);

}

DeveloperInfo::DeveloperInfo(const DeveloperInfo& other) : developerName(nullptr) {
    
    deepCopy(this->developerName, other.developerName);

}

DeveloperInfo& DeveloperInfo::operator=(const DeveloperInfo& other) {

    if (this != &other) {

        deepCopy(this->developerName, other.developerName);

    }

    return *this;

}

DeveloperInfo::~DeveloperInfo() {

    delete[] developerName;

}

void DeveloperInfo::displayDeveloper() const {

    std::cout << "Developer: " << developerName << std::endl;

}

std::ostream& operator<<(std::ostream& out, const DeveloperInfo& developer) {

    out << "Developer: " << developer.developerName;

    return out;

}

std::istream& operator>>(std::istream& in, DeveloperInfo& developer) {

    char temp[100];

    std::cout << "Enter developer name: ";
    in >> temp;
    deepCopy(developer.developerName, temp);

    return in;

}
