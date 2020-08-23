#include <iostream>

#include "./src/main_menu.h"
#include "src/snake.h"
#include "src/Game.h"

#define USAGE "usage: ./race00 [width] [height]"

int main(int argc, char** argv) {
    if (argc == 3) {
        sf::RenderWindow
            window(sf::VideoMode(1920, 1080), "snake-line", sf::Style::Close);
        Game game(&window, sf::Color::Magenta, sf::Color::Cyan);
        game.Start();
    }
    else {
        std::cerr << USAGE << std::endl;
    }
    return 0;
}
