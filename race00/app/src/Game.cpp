#include "Game.h"

Game::Game(sf::RenderWindow *w, sf::Color colorHead, sf::Color colorBody)
    : snake(w, colorHead, colorBody) {
    screen = w;
    score = 0;
}

void Game::Start() {
    LoadResources();
    LoopIvent();
}

void Game::LoadResources() {
    screen->clear();
    snake.DrawSnake();
}

void MoveSnakeOnMap(sf::Event &event, sf::Vector2<int> &direction) {
    if (event.type == sf::Event::KeyReleased) {
        if (event.key.code == sf::Keyboard::Up) {
            direction.y = -1;
            direction.x = 0;
        } else if (event.key.code == sf::Keyboard::Down) {
            direction.y = 1;
            direction.x = 0;
        } else if (event.key.code == sf::Keyboard::Left) {
            direction.x = -1;
            direction.y = 0;
        } else if (event.key.code == sf::Keyboard::Down) {
            direction.x = 1;
            direction.y = 0;
        }
    }
}

void Game::LoopIvent() {
    sf::Vector2<int> direction(-1, 0);
    scale = 5;
    while (screen->isOpen()) {
        LoadResources();
        sf::Event event;
        while (screen->pollEvent(event)) {
            MoveSnakeOnMap(event, direction);
            if (event.key.code == sf::Keyboard::Space) {
                screen->close();
            }
        }
        snake.MoveSnake(direction);
        screen->display();
        screen->setFramerateLimit(10);
    }
}
