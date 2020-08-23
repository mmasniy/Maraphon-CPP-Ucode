#pragma once
#include <random>
#include <list>
#include "snake.h"
#include "menu.h"

class Game {
    void LoopIvent();
//    void SetupMap();
    void GameOver();
    void LoadResources();
    Snake snake;
    sf::RenderWindow *screen;
    Player& player;

    public:
    Game(sf::RenderWindow *w,
         sf::Color colorHead,
         sf::Color colorBody,
         Player &player_);
    void Start();
};
