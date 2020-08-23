#include <zconf.h>
#include "snake.h"
#include "Game.h"

Snake::Snake(sf::RenderWindow *window, sf::Color colorH, sf::Color colorB) {
    snake_length = 4;
    movementScale = 40;
    screen = window;
    colorBody = colorB;

    int x = 1920 / 2;
    int y = 1080 / 2;
    for (int i = 0; i < 4; ++i) {
        if (i == 3) {
            sf::Vector2<int> position = {x + BOX_SIZE * (i + 1), y};
            body.push_back({position, colorH});
        } else {
            body.push_back({{x + BOX_SIZE * (i + 1), y}, colorBody});
        }
    }
    updateLegth = false;
}

void Snake::DrawSnake() {
    for (auto &b : body) {
        screen->draw(b.GetBox());
    }
}

bool Snake::DiedSnake() {
    auto head = body.front();
    std::cerr << "Size: " << std::distance(body.begin(), body.end())
              << std::endl;
    int count = count_if(body.begin() + 1, body.end(), [&head](Block &box) {
        std::cout << "Position X: " << box.GetPosition().x << " & "
                  << head.GetPosition().x << std::endl;
        std::cout << "Position Y: " << box.GetPosition().y << " & "
                  << head.GetPosition().y << std::endl;
        return (box.GetPosition().x == head.GetPosition().x
            && box.GetPosition().y == head.GetPosition().y);
    });
    return !(count != 0 || (screen->getSize().x
        < static_cast<unsigned int>(head.GetPosition().x)
        || head.GetPosition().x < 0 || screen->getSize().y
        < static_cast<unsigned int>(head.GetPosition().y))
        || head.GetPosition().y < 0);
}

bool Snake::MoveSnake(sf::Vector2<int> direction) {
    auto head = body.front();
    if (DiedSnake()) {
        Block box({head.GetPosition().x + BOX_SIZE * direction.x,
                   head.GetPosition().y + BOX_SIZE * direction.y}, colorBody);
        body.push_front(box);
        body.pop_back();
        return false;
    }
    return true;
}
void Snake::AddBoxToTail(sf::Vector2<int> direction) {
    body.push_back({{direction.x, direction.y}, sf::Color::Yellow});
}
