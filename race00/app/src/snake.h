#pragma once
#include <iostream>
#include <map>
#include <list>
#include <deque>
#include "functional.h"

#define BOX_SIZE 40

class Block {
    public :
    Block(sf::Vector2<int> new_pos, sf::Color color);
    sf::Vector2<int> GetPosition();
    sf::RectangleShape GetBox();

    private:
    sf::Vector2<int> position;
    sf::RectangleShape box;
};

class Snake {
public:
    Snake(sf::RenderWindow *window, sf::Color colorHead, sf::Color colorBody);
    void DrawSnake();
    bool MoveSnake(sf::Vector2<int> direction);
    bool DiedSnake();
    void AddBoxToTail(sf::Vector2<int> direction);
    sf::Vector2<int> GetNextLocationForFood();
    bool AteFood(Fruit fd);
    int SetFramerateLimit();

private:
    int FramerateLimit = 60;
    sf::RenderWindow *screen;
    float movementScale;
    int snake_length;

    std::deque<Block> body;
    sf::Color colorBody;
    sf::Color colorHead;
};

