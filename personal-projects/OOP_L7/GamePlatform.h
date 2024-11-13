#ifndef GAMEPLATFORM_H
#define GAMEPLATFORM_H

#include "Game.h"
#include "User.h"

class GamePlatform {

private:
    char* platformName;

    Game** games;
    int gameCount;
    int gameCapacity;

    User** users;
    int userCount;
    int userCapacity;

public:
    GamePlatform(const char* platformName);
    ~GamePlatform();

    void addGame(const Game& game);
    void addUser(const User& user);

    void displayGames() const;
    void displayUsers() const;

};

#endif // GAMEPLATFORM_H
