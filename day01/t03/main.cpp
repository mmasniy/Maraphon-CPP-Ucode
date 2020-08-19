#include "src/vampireRabbits.h"

int main() {
    srand(time(0));
    std::list<Rabbit> rabbits;
    for (int i = 0; i < 10; ++i) {
        rabbits.push_back(CreateRabbit());
    }
    while(rabbits.size() <= 1000 && rabbits.size() > 0) {
        PrintPopulationRabbit(rabbits);
        sleep(1);
        ReproductionRabbits(rabbits);
        IncreaseAgeRabbits(rabbits);
        KillRabbits(rabbits);
    }
    return 0;
}
