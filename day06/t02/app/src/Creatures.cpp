#include "Creatures.h"

Creatures::Creature::Creature(std::string &&name)
    : m_name(std::move(name)), m_health(100), m_mana(100){
}

Creatures::Creature::~Creature() {
    for (auto& spell : m_spells) {
        delete spell;
    }
}
