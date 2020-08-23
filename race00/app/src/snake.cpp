#include "snake.h"

Snake::Snake (sf::RenderWindow *window, sf::Color colorH, sf::Color colorB) {
    snake_length = 4;
    movementScale = 40;
    screen = window;
    colorBody = colorB;

    int x = 1920 / 2;
    int y = 1080 / 2;
    for (int i = 0; i < 4; ++i) {
        if (i == 0) {
            sf::Vector2<int> position = {x + BOX_SIZE, y};
            Block head(std::move(position), colorH);
            body.push_front(head);
        }
        else {
            Block head({x + BOX_SIZE * (i + 1), 0}, colorBody);
            body.push_front(head);
        }
    }
    updateLegth = false;
}

void Snake::DrawSnake() {
    for (const auto& b : body) {
        screen->draw(b.GetBox());
    }
}

bool Snake::DiedSnake() {
    return true;
}

void Snake::MoveSnake(sf::Vector2<int> direction){
//    auto head = body.front().GetPosition();
//    int x = head.x + BOX_SIZE * direction.x;
//    int y = head.y + BOX_SIZE * direction.y;

//    Block box(head, colorBody);
//    body.push_front(box);
//    lastPosition = list_position.back();
//    body.pop_back();
//    std::list<sf::Vector2<int> >::iterator i = list_position.begin();
//    int index = 0;
//    while (i != list_position.end() && index < snake_length) {
//        body[index].move( movementScale*(*i).x, movementScale*(*i).y );
//        index++;
//        i++;
//    }
}
