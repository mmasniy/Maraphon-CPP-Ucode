#include "Game.h"
#include "fruit.h"
#include <stdlib.h>
#include <chrono>

Game::Game(sf::RenderWindow *w,
           sf::Color colorHead,
           sf::Color colorBody,
           Player &player_)
    : snake(w, colorHead, colorBody), player(player_) {
    screen = w;
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
    player.score = 20;
    sf::Vector2<int> direction(-1, 0);
    bool flag = true;
    chrer
    while (screen->isOpen() && flag) {
        Fruit fruit(screen, snake.GetNextLocationForFood(), (1 + (rand() % 50)));
        fruit.CreateFruit(snake.GetNextLocationForFood());
        fruit.DrawFruit();
        LoadResources();
        sf::Event event{};
        while (screen->pollEvent(event)) {
            MoveSnakeOnMap(event, direction);
            if (event.key.code == sf::Keyboard::Escape) {
                screen->close();
            } else if (event.key.code == sf::Keyboard::Space) {
                player.score += 5;
                snake.AddBoxToTail(direction);
            }
        }
        if (snake.MoveSnake(direction)) {
            flag = false;
        }
        if (snake.AteFood(fruit)) {
            fruit.CreateFruit(snake.GetNextLocationForFood());
            fruit.DrawFruit();
        }

        if ()
        screen->display();
//        screen->setFramerateLimit(snake.SetFramerateLimit());
    }
}
