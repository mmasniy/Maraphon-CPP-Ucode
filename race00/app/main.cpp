#include <iostream>

#include "src/functional.h"
#include "src/snake.h"
#include "src/Game.h"
#include "src/menu.h"
#include "src/fruit.h"

#include <string>

#define USAGE "usage: ./race00 [width] [height]"


void game_start (sf::RenderWindow* window, Player& player) {
    Game game
        (window, sf::Color::Magenta, sf::Color::Cyan, player);
    game.Start();
}

void show_Show_LeaderBoard(sf::RenderWindow* window) {

    sf::Event event;
    std::cout << window->isOpen() << std::endl;
    while (window->pollEvent(event)) {
        std::cout << "ddddd5\n" << std::endl;
        window->clear();
        sf::Font font;

        if (!font.loadFromFile("ArialBold.ttf")) {
            //err
        }

        sf::Text text;
        text.setString("Hello world");

        text.setFont(font);
        text.setCharacterSize(30);
        text.setColor(sf::Color::White);
        window->draw(text);

        window->display();
        if (event.key.code == sf::Keyboard::Escape) {
            break;
        }
    }

}
int main(int argc, char** argv) {
    if (argc != 3) {
        std::cerr << USAGE << std::endl;
        return EXIT_FAILURE;
    }
    int width;
    int height;

    try {
       width = std::stoi(argv[1]);
       height = std::stoi(argv[2]);
       if ((width < 512 || width > 1024) && (height < 512 || height > 1024)) {
           width = 1024;
           height = 1024;
       }
    } catch (std::out_of_range& ex) {
        std::cerr << "error input parameters, use dedaults\n" ;
        width = 1024;
        height = 1024;
    };


    sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode((width%4), (height%4)), "snake-line", sf::Style::Titlebar);
    Menu main(window, window->getSize().x, window->getSize().y);
    window->setTitle("SNAKE");
    window->setMouseCursorVisible(false);
    std::string new_player_name;

    while (window->isOpen()) {
        sf::Event event;
        while (window->pollEvent(event)) {
            if (event.type == sf::Event::KeyReleased) {
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
                                game_start(window, main.GetPlayer());
                                main.Add_player_score();
                                main.Save_result_to_file();
                            case 1:
                                std::cout << "LeaderBoard" << std::endl;
                                show_Show_LeaderBoard(window);

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
            }
            else if (sf::Event::TextEntered) {
                while (window->pollEvent(event)) {
                    std::cout << "dddddddaaa5\n" << std::endl;
                    window->clear();
                    if (new_player_name.size() > 8 && event.text.unicode != '\b') {
                        break;
                    }
                    else if (event.text.unicode == '\b') {
                        std::cout << "event.text.unicod\n" << std::endl;
                        main.Set_player_name(std::string(new_player_name.begin(), --new_player_name.end()));
                        break;
                    } else {
                        new_player_name += event.text.unicode;
                        main.Set_player_name(new_player_name);

                    }
//                    new_player_name += event.text.unicode;
//                    main.current_player.name = player_name;

//                    window->draw(text);
//                    window->display();
//                    if (event.key.code == sf::Keyboard::Escape) {
//                        break;
//                    }
                }
            }
            else {
//                (sf::Event::Closed) {
                window->close();
                break;
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

    sf::Vector2u size = window->getSize();  // Get the size of the rendering region of the window.
    int width = size.x;
    int height = size.y;

    std::cout << "width = " << width <<std::endl;
    std::cout << "height = " << height <<std::endl;


 */
