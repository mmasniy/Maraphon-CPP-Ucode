#include "castSpells.h"
#include <iostream>

int main() {
    int v = 10;
    const int* a = &v;
    std::cout << (castFloatToInt(1.2)) << std::endl;
    std::cout << ++*(castToNonConstIntPtr(a)) << std::endl;
}
