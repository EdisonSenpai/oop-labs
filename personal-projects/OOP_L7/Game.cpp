#include "Game.h"

Game::Game(const char* title, const char* genre, const char* developerName)
    : GameInfo(title, genre), DeveloperInfo(developerName) {}

void Game::displayGameDetails() const {

    displayInfo();
    displayDeveloper();

}

std::istream& operator>>(std::istream& in, Game& game) {

    in >> static_cast<GameInfo&>(game);        // Foloseste operatorul >> din GameInfo
    in >> static_cast<DeveloperInfo&>(game);   // Foloseste operatorul >> din DeveloperInfo
    
    return in;

}
