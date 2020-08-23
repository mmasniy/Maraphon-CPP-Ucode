#include "fruit.h"

#define Fruit_SIZE 40

Fruit::Fruit(sf::RenderWindow *window, sf::Vector2<int> direction) {
    screen = window;
    color = sf::Color::Green;
    location = RandomFruitGenerate(direction);
    food.setSize(sf::Vector2f(Fruit_SIZE, Fruit_SIZE));
    food.setPosition(direction.x, direction.y);
    food.setOutlineThickness(4);
    food.setFillColor(color);
}

sf::Vector2<int> Fruit::GetPositionFood() {
    return location;
}
