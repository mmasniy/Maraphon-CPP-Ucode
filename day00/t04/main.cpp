#include "referenceOrPointer.h"
#include <iostream>

int main() {
    int value = 10;
    int* v = &value;
    multiplyByPointer(v, 2);
    std::cout << value << std::endl;
    multiplyByReference(value, 2);
    std::cout << value << std::endl;
}
