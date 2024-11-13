#ifndef GAME_H
#define GAME_H

#include "GameInfo.h"
#include "DeveloperInfo.h"

class Game : public GameInfo, public DeveloperInfo {

public:
    Game(const char* title = "", const char* genre = "", const char* developerName = "");
    
    void displayGameDetails() const;

    friend std::istream& operator>>(std::istream& in, Game& game);

};

#endif // GAME_H
