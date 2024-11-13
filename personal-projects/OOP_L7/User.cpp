#include "User.h"

User::User(const char* username) : username(nullptr) {

    deepCopy(this->username, username);

}

User::User(const User& other) : username(nullptr) {

    deepCopy(this->username, other.username);

}

User& User::operator=(const User& other) {

    if (this != &other) {

        deepCopy(this->username, other.username);

    }

    return *this;

}

User::~User() {

    delete[] username;

}

void User::displayUserInfo() const {

    std::cout << "User: " << username << std::endl;

}

std::ostream& operator<<(std::ostream& out, const User& user) {

    out << "User: " << user.username;

    return out;

}

std::istream& operator>>(std::istream& in, User& user) {

    char temp[100];

    std::cout << "Enter username: ";
    in >> temp;
    deepCopy(user.username, temp);

    return in;

}
