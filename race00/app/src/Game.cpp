#include "Game.h"
#include "fruit.h"
#include <cstdlib>
#include <chrono>

//sf::Clock::chrono;

void DrawScore(sf::RenderWindow* window, Player& player) {
    sf::Text text;
    sf::Font font;
    if (!font.loadFromFile("ArialBold.ttf")) {}
    text.setFont(font);
    text.setCharacterSize(30);
    sf::Color font_color(sf::Color::White);
    text.setPosition(0, 0);
    text.setColor(font_color);
    text.setString("Score: " + std::to_string(player.score));
    window->draw(text);
}

Game::Game(sf::RenderWindow *w,
           sf::Color colorHead,
           sf::Color colorBody,
           Player &player_, Fruit& fruit)
    : snake(w, colorHead, colorBody, fruit), player(player_) {
    seconds = 0;
    delay = 0.07;
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
    while (screen->isOpen() && flag) {
        LoadResources();
        sf::Event event{};
        while (screen->pollEvent(event)) {
            MoveSnakeOnMap(event, direction);
            if (event.key.code == sf::Keyboard::Space) {
                player.score += snake.GetFruit().GetScore();
                snake.AddBoxToTail(direction);
            } else if (event.key.code == sf::Keyboard::LShift) {
                delay = 0.069999999;
            } else if (event.key.code == sf::Keyboard::LControl) {
                delay = 0.08;
            }
        }
        if(delay < 0.07) {
            Update_delay(delay);
        }
        if(chrono.getElapsedTime().asSeconds() > delay) {
            if (snake.MoveSnake(direction) || snake.GetSnakeSize() < 2) {
                flag = false;
            }
            chrono.restart();
        }
        if(chrono_delete_snake.getElapsedTime().asSeconds() > 1) {
            seconds +=1;
            if(seconds == 4) {
                seconds = 0;
                snake.DeleteBox();
            }
            chrono_delete_snake.restart();
        }
        snake.DrawFruit(player);
        DrawScore(screen, player);
        screen->display();
    }
}

void Game::Update_delay(double &delay) {
    delay = 0.00001 + ((snake.GetSnakeSize() - 1) * (0.003));
}

