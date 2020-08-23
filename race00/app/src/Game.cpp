#include "Game.h"
#include "../../../../../../../Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"

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
        if (event.key.code == sf::Keyboard::Up && direction.y != 1) {
            direction.y = -1;
            direction.x = 0;
        } else if (event.key.code == sf::Keyboard::Down && direction.y != -1) {
            direction.y = 1;
            direction.x = 0;
        } else if (event.key.code == sf::Keyboard::Left && direction.x != 1) {
            direction.x = -1;
            direction.y = 0;
        } else if (event.key.code == sf::Keyboard::Right && direction.x != -1) {
            direction.x = 1;
            direction.y = 0;
        }
    }
}

void Game::LoopIvent() {
    sf::Vector2<int> direction(-1, 0);
    bool flag = true;
    while (screen->isOpen() && flag) {
        LoadResources();
        sf::Event event;
        while (screen->pollEvent(event)) {
            MoveSnakeOnMap(event, direction);
            if (event.key.code == sf::Keyboard::Escape) {
                screen->close();
            } else if (event.key.code == sf::Keyboard::Space) {
                snake.AddBoxToTail(direction);
            }
        }
        if (snake.MoveSnake(direction)) {
            flag = false;
        }
        screen->display();
        screen->setFramerateLimit(15);
    }
}
