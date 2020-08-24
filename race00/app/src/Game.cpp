#include "Game.h"
#include "fruit.h"
#include <cstdlib>
#include <chrono>

//sf::Clock::chrono;

Game::Game(sf::RenderWindow *w,
           sf::Color colorHead,
           sf::Color colorBody,
           Player &player_, Fruit& fruit)
    : snake(w, colorHead, colorBody, fruit), player(player_) {
    seconds = 0;
    delay = 0.04;
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
    auto start = std::chrono::steady_clock::now();
//    Fruit fruit_(screen, snake.GetNextLocationForFood(), (1 + std::rand() % 50));
    while (screen->isOpen() && flag) {
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

//        if (snake.AteFood(fruit)) {
//
//        }
        if(delay < 0.07) {
            Update_delay(delay);
        }
        if(chrono.getElapsedTime().asSeconds() > delay) {
            if (snake.MoveSnake(direction) || snake.GetSnakeSize() < 2) {
                flag = false;
            }
            chrono.restart();
        }

//        if(clear_chrono.getElapsedTime().asSeconds() > 0.2)
//        {
//            game.clearTrack();
//            clear_chrono.restart();
//        }
//
        if(chrono_delete_snake.getElapsedTime().asSeconds() > 1) {
            seconds +=1;
            if(seconds == 4) {
                seconds = 0;
                snake.DeleteBox();
            }
            chrono_delete_snake.restart();
        }
        snake.DrawFruit();
        screen->display();
    }
}

void Game::Update_delay(double &delay) {
    delay = 0.00001 + ((snake.GetSnakeSize() - 1) * (0.003));
}

