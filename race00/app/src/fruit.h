#pragma once
#include "functional.h"


class Fruit {
    public:
    Fruit(sf::RenderWindow *window, sf::Vector2<int> direction, long long score_Fruit);
    void CreateFruit(sf::Vector2<int> direction);
//    sf::RectangleShape GetFood();
    sf::Vector2<int> GetPositionFruit();
    void DrawFruit();

    private:
    long long score;
    sf::Color color;
    sf::Vector2<int> location;
    sf::RectangleShape food;
    sf::RenderWindow *screen;
};
