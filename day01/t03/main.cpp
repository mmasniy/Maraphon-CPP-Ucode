#include "src/vampireRabbits.h"

Rabbit CreateRabbit() {
    Rabbit rabbit;
    rabbit.age = 0;
    rabbit.gender = rand() % 2 ? Gender::Male : Gender::Female;
    rabbit.isVampire = (rand() % 100) == 0 ? 1 : 0;
//    std::string buff = rabbit.gender == Gender::Male ? "male" : "female";
//    std::cout << "Rabbit:\nAge = " << rabbit.age << "\nGender = ";
//    std::cout << buff;
//    std::cout << "\nIsVampire = " << rabbit.isVampire << std::endl;
    return rabbit;
}

void KillRabbits(std::list<Rabbit>& rabbits) {
    for (auto iter = rabbits.begin(); iter != rabbits.end();) {
        if ((iter->age > 3 && iter->isVampire == 0)
            || (iter->age > 8 && iter->isVampire == 1)) {
            iter = rabbits.erase(iter);
        }
        else {
            ++iter;
        }
    }
}

std::vector<int> CountPopulation(std::list<Rabbit>& rabbits) {
    std::vector<int> population(3);
    population[0] = count_if(rabbits.begin(), rabbits.end(), [](const Rabbit& rabbit) {
        return rabbit.gender == Gender::Male && rabbit.isVampire == 0;
    });

    population[1] = rabbits.size() - population[0];

    population[2] = count_if(rabbits.begin(), rabbits.end(), [](const Rabbit& rabbit) {
        return rabbit.isVampire == 1;
    });
    return population;
}

void PrintPopulationRabbit(std::list<Rabbit>& rabbits) {
    std::vector<int> population = CountPopulation(rabbits);
    int male = count_if(rabbits.begin(), rabbits.end(), [](const Rabbit& rabbit) {
        return rabbit.gender == Gender::Male;
    });
    int female = rabbits.size() - male;
    int vampire = count_if(rabbits.begin(), rabbits.end(), [](const Rabbit& rabbit) {
        return rabbit.isVampire == 1;
    });
    std::cout << "Males = " << male << std::endl;
    std::cout << "Females = " << female << std::endl;
    std::cout << "Vampires = " << vampire << std::endl;
    std::cout << std::endl;
}

void IncreaseAgeRabbits(std::list<Rabbit>& rabbits) {
    for (auto iter = rabbits.begin(); iter != rabbits.end(); ++iter) {
        ++(iter->age);
    }
}

void ReproductionRabbits(std::list<Rabbit>& rabbits) {
    std::vector<int> rabbits_data = CountPopulation(rabbits);
    size_t family = 0;

    rabbits_data[0] > rabbits_data[1] ? family = rabbits_data[1]
            : family = rabbits_data[0];
//    std::cout << "    !Male = " << rabbits_data[0] << "\n    !Female = " << rabbits_data[0] << std::endl;
//    std::cout << "    !Family = " << family << std::endl;
    for (size_t i = 0; i < family; ++i) {
        rabbits.push_back(CreateRabbit());
    }
    int i = 0;
    for (auto iter = rabbits.begin(); iter != rabbits.end() && i < rabbits_data[2];) {
        if (iter->isVampire == 0) {
            iter->isVampire = 1;
            ++i;
        }
        ++iter;
    }
}

int main() {
    srand(time(0));
    std::list<Rabbit> rabbits;
    for (int i = 0; i < 10; ++i) {
        rabbits.push_back(CreateRabbit());
    }
    while(rabbits.size() <= 1000 && rabbits.size() > 0) {
        sleep(1);
        IncreaseAgeRabbits(rabbits);
        ReproductionRabbits(rabbits);
        PrintPopulationRabbit(rabbits);
        KillRabbits(rabbits);
    }
    return 0;
}
