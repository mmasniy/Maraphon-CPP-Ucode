#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Audio/Music.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include "src/menu.h"
#include "src/snake.h"
#include "src/Game.h"

#define USAGE "usage: ./race00 [width] [height]"

void game_start (sf::RenderWindow* window) {
    Game game(window, sf::Color::Magenta, sf::Color::Transparent);
    game.Start();
}

int main(int argc, char* argv[]) {

//    if (argc != 3) {
//        std::cerr << USAGE << std::endl;
//        return EXIT_FAILURE;
//    }

    sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode(1920, 1280), "snake-linee");

    Menu main(window, window->getSize().x, window->getSize().y);

    window->setTitle("MAIN SNAKE");

    sf::Vector2u size = window->getSize();  // Get the size of the rendering region of the window.
    int width = size.x;
    int height = size.y;

    std::cout << "width = " << width <<std::endl;
    std::cout << "height = " << height <<std::endl;

    while (window->isOpen()) {
        sf::Event event;
        while (window->pollEvent(event)) {
            switch (event.type) {
                case sf::Event::KeyReleased:
                    switch (event.key.code) {
                        case sf::Keyboard::Up:
                            main.MoveUp();
                            break;
                        case sf::Keyboard::Down:
                            main.MoveDown();
                            break;

                        case sf::Keyboard::Return: //enter
                            switch (main.GetPressedItem()) {
                                case 0:
                                    std::cout << "Play button has been pressed" << std::endl;
                                    game_start(window);

                                case 1:
                                    std::cout << "LeaderBoard" << std::endl;


                                case 2:
                                    std::cout << "Options" << std::endl;
                                    break;
                                case 3:
                                    window->close();
                            }
                            break;
                        default:
                            ;
                    }
                    break;
                case sf::Event::Closed:
                    window->close();
                    break;
                default:
                    ;
            }
        }
        window->clear();
        main.start(*window);
        window->display();
    }
    delete window;
    return 0;
}



//    sf::Music music;
//    if (!music.openFromFile("nice_music.ogg"))
//        return EXIT_FAILURE;
//    // Play the music
//    music.play();
//    window.setMouseCursorVisible(true);

//    window.setPosition(sf::Vector2i(10, 50));

//    window.setSize(sf::Vector2u(640, 480));

//    if (!texture.loadFromFile("./texture/1.png")){
//        std:: cerr << "error" << std::endl;
//    }

//


/*
 *             sf::RectangleShape rectangle(sf::Vector2f(50.f, 50.f));
            rectangle.setPosition(50.f, 50.f);
            window.draw(rectangle);

            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            window.display();

        }

 */
