#include "fruit.h"

#define Fruit_SIZE 40

Fruit::Fruit(sf::RenderWindow *window, sf::Vector2<int> direction, long long score_Fruit) {
    score = score_Fruit;
    screen = window;
    color = sf::Color::Green;
    location = direction;
}

sf::Vector2<int> Fruit::GetPositionFruit() {
    return location;
}

void Fruit::DrawFruit() {
    screen->draw(food);
}

void Fruit::CreateFruit(sf::Vector2<int> direction) {
    food.setSize(sf::Vector2f(Fruit_SIZE, Fruit_SIZE));
    food.setPosition(direction.x, direction.y);
    food.setOutlineThickness(4);
    food.setFillColor(color);
}
