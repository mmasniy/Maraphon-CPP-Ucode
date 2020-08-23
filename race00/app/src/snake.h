#pragma once
#include <iostream>
#include <map>
#include <list>
#include <deque>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>


#define BOX_SIZE 40

class Block {
    public :
    Block(sf::Vector2<int> new_pos, sf::Color color) {
        box.setSize(sf::Vector2f(BOX_SIZE, BOX_SIZE));
        box.setPosition(new_pos.x, new_pos.y);
        box.setFillColor(color);
    }
    sf::Vector2<int> GetPosition() {
        return position;
    }

    sf::RectangleShape GetBox() const {
        return box;
    }
    private:
    sf::Vector2<int> position;
    sf::RectangleShape box;
};


class Snake {
public:
    Snake(sf::RenderWindow *window, sf::Color colorHead, sf::Color colorBody);
    void DrawSnake();
    void MoveSnake(sf::Vector2<int> direction);
    bool DiedSnake();
//    bool AteFood(Food *fd);

private:
    sf::RenderWindow *screen;
    bool updateLegth;
    float movementScale;
    int snake_length;

    std::deque<Block> body;
    //    sf::RectangleShape rectangle(sf::Vector2f((4.f, 4.f)));
    /*   Color snake   */
    sf::Color colorBody;
};

