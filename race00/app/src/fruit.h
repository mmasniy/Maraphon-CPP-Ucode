#pragma once
#include "functional.h"

class Fruit {
    public:
    Fruit(sf::RenderWindow *, sf::Vector2<int> direction);
//    sf::RectangleShape GetFood();
    sf::Vector2<int> GetPositionFood();
    void DrawFood();

    private:
    sf::Color color;
    sf::Vector2<int> location;
    sf::RectangleShape food;
    sf::RenderWindow *screen;
};
