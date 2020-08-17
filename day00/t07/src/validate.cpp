#include "validate.h"

bool ValidateCin(void) {
    if (std::cin.peek() != '\n') {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        std::cerr << "Invalid command.\n";
        return 1;
    }
    return 0;
}

bool ValidateItem(const char& it) {
    if ((it != 'w' && it != 'f' && it != 'a' && it != 'p')) {
        std::cerr << "Invalid item.\n";
        return 1;
    }
    return 0;
}
