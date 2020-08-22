#pragma once
#include <iostream>
#include <map>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>


class Snake {
public:
    Snake(sf::RenderWindow *);

    void drawSnake();

private:

    int snake_length;
    std::vector<sf::RectangleShape> body;
//    sf::RectangleShape rectangle(sf::Vector2f((4.f, 4.f)));
//    sf::RenderWindow *screen;
    sf::Color colorBody;
    sf::Color colorHead;

};

