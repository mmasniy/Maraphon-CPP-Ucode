//#pragma once

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Text.hpp>

#define MAX_NUMBER_OF_ITEMS 4

class Menu {
public:

    Menu(sf::RenderWindow *_window, float width, float height);
    ~Menu();
    void start(sf::RenderWindow &w);
    void MoveUp();
    void MoveDown();
    int GetPressedItem();
    void Play_Game(sf::RenderWindow &w);
    void Show_LeaderBoard();
//    sf::RenderWindow GetWindow();

private:
    sf::RenderWindow *window;
    sf::Font font;
    int selectedItemIndex;
    sf::Text menu[MAX_NUMBER_OF_ITEMS];
    sf::Color font_color;

};


class StartGameAction {
public:
    StartGameAction( sf::RenderWindow *w);

    bool start();
private:
    sf::RenderWindow *window;
};
