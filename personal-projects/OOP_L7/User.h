#ifndef USER_H
#define USER_H

#include <iostream>
#include "Utilities.h"

class User {

private:
    char* username;

public:
    User(const char* username = "");
    User(const User& other);
    User& operator=(const User& other);
    ~User();

    void displayUserInfo() const;

    friend std::ostream& operator<<(std::ostream& out, const User& user);
    friend std::istream& operator>>(std::istream& in, User& user);

};

#endif // USER_H
