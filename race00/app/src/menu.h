#pragma once

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Text.hpp>

#define MAX_NUMBER_OF_ITEMS 4

class Player {
public:
    Player() {
        score = 0;
        name = "player";
    }
    long long score;
    std::string name;
};

class Menu {
public:
    Menu(sf::RenderWindow *_window, float width, float height);
    ~Menu();
    void start(sf::RenderWindow &w);
    void MoveUp();
    void MoveDown();
    int GetPressedItem();
//    void Play_Game(sf::RenderWindow &w);
    void Show_LeaderBoard();
    void Set_player_name(const std::string& new_name);
    Player& GetPlayer();
private:
    Player current_player;
    sf::RenderWindow *window;
    sf::Font font;
    int selectedItemIndex;
    sf::Text menu[MAX_NUMBER_OF_ITEMS];
    sf::Color font_color;
    std::multimap<int, std::string> score_table;
};


//class StartGameAction {
//public:
//    StartGameAction( sf::RenderWindow *w);
//    bool start();
//private:
//    sf::RenderWindow *window;
//};
