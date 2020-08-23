#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Audio/Music.hpp>
#include <SFML/Graphics/Sprite.hpp>

#include "menu.h"

Menu ::Menu(sf::RenderWindow *_window, float width, float height) {
    window = _window;
    if (!font.loadFromFile("ArialBold.ttf")) { }
    int font_size = std::min(width, height) / 25;

    sf::Color font_color(255, 140, 0, 255);
    menu[0].setFont(font);
    menu[0].setCharacterSize(font_size);

    menu[0].setColor(font_color);
    menu[0].setString("New game for " + current_player.name);
    menu[0].setPosition(sf::Vector2f(width / 2 - 50, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));

    menu[1].setFont(font);
    menu[1].setCharacterSize(font_size);

    menu[1].setColor(sf::Color::White);
    menu[1].setString("LeaderBoard");
    menu[1].setPosition(sf::Vector2f(width / 2 - 50 , height / (MAX_NUMBER_OF_ITEMS + 1) * 2));

    menu[2].setFont(font);
    menu[2].setCharacterSize(font_size);

    menu[2].setColor(sf::Color::White);
    menu[2].setString("Options");
    menu[2].setPosition(sf::Vector2f(width / 2 - 50,  height / (MAX_NUMBER_OF_ITEMS + 1) * 3));

    menu[3].setFont(font);
    menu[3].setCharacterSize(font_size);

    menu[3].setColor(sf::Color::White);
    menu[3].setString("Exit");
    menu[3].setPosition(sf::Vector2f(width / 2 - 50, height / (MAX_NUMBER_OF_ITEMS + 1) * 4));
    selectedItemIndex = 0;
}

Menu::~Menu() { }


void Menu::MoveUp() {
    sf::Color color(255, 140, 0, 255);
    if (selectedItemIndex - 1 >= 0) {
        menu[selectedItemIndex].setColor(sf::Color::White);
        selectedItemIndex--;
        menu[selectedItemIndex].setColor(color);
    }
}

void Menu::MoveDown() {
    sf::Color color(255, 140, 0, 255);
    if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS) {
        menu[selectedItemIndex].setColor(sf::Color::White);
        selectedItemIndex++;
        menu[selectedItemIndex].setColor(color);
    }
}

void Menu::start(sf::RenderWindow &window) {
    sf::Texture menuBackground;

    //background image
//    menuBackground.loadFromFile("unsplash.jpg");
//    sf::Sprite menu_bg(menuBackground);
//    window.draw(menu_bg);
    for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++) {
        window.draw(menu[i]);
    }
}

int Menu :: GetPressedItem() {
    return selectedItemIndex;
}

void Menu::Show_LeaderBoard() {
    sf::Text text;
    text.setString("Hello world");
}

void Menu::Set_player_name(const std::string& new_name) {
    current_player.name = new_name;
    menu[0].setString("New game for " + current_player.name);

}














//void Menu::start(sf::RenderWindow *w) {
//    Menu menu(w);
//    action[0] = StartGameAction( w );
//    action[3] = ExitAction( w );
//
//    gmenu::MenuItem items[4];
//
//    for ( int i = 0; i < 4; ++i ) {
//        items[i].title = MenuText[i];
//        items[i].action = action[0];
//    }
//    items[3].action = action[3];
//    menu.setMenuItems( items, 4 );
//    menu.setTitle( "Sfml-Snake" );
//    menu.createMenu();
//
//
//}

//    sf::Texture menuTexture1;
//    menuTexture1.loadFromFile("new_game.png");
//    menuTexture2.loadFromFile("images/222.png");
//    menuTexture3.loadFromFile("images/333.png");
