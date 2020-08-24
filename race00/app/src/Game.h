#pragma once
#include <random>
#include <list>
#include "snake.h"
#include "menu.h"

class Game {
    int seconds;
    double delay;
    void LoopIvent();
//    void SetupMap();
    void GameOver();
    void LoadResources();
    Snake snake;
    sf::RenderWindow *screen;
    Player& player;
    sf::Clock chrono;
    sf::Clock chrono_delete_snake;

    public:
    Game(sf::RenderWindow *w,
         sf::Color colorHead,
         sf::Color colorBody,
         Player &player_, Fruit& fruit);
    void Start();
    void Update_delay(double& delay);
};
