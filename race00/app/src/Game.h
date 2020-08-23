#pragma once

#include <random>
#include <list>

#include "menu.h"
#include "snake.h"

#include <SFML/Window.hpp>
#include <SFML/Window/Window.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

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
