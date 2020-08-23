#include "functional.h"

sf::Vector2<int> RandomFruitGenerate(sf::Vector2<int> size_screen) {
    srand(time(0));
    return {1 + rand() % (size_screen.x - 1), 1 + rand() % (size_screen.y - 1)};
}
