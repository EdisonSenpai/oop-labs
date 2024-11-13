#ifndef GAMEINFO_H
#define GAMEINFO_H

#include <iostream>
#include "Utilities.h"

class GameInfo {

protected:
    char* title;
    char* genre;

public:
    GameInfo(const char* title = "", const char* genre = "");
    GameInfo(const GameInfo& other);
    GameInfo& operator=(const GameInfo& other);
    ~GameInfo();

    void displayInfo() const;

    friend std::ostream& operator<<(std::ostream& out, const GameInfo& info);
    friend std::istream& operator>>(std::istream& in, GameInfo& info);

};

#endif // GAMEINFO_H
