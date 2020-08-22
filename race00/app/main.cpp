#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include "./src/main_menu.h"
#include "src/snake.h"

#define USAGE "usage: ./race00 [width] [height]"

int main(int argc, char* argv[]) {

    sf::RenderWindow window(sf::VideoMode(800, 800), "New game", sf::Style::Default);
    sf::Texture texture;
//    if (!texture.loadFromFile("./texture/1.png")){
//        std:: cerr << "error" << std::endl;
//    }

//    MainMenu menu;
//    menu.start(&window);

    while (window.isOpen()) {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event)) {

            sf::RectangleShape rectangle(sf::Vector2f(50.f, 50.f));
            rectangle.setPosition(50.f, 50.f);
            window.draw(rectangle);

            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            window.display();
        }
    }
    return 0;
}
