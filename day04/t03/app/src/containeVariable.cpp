#include "containeVariable.h"


bool ContaineVarible::HasVariable(std::string operand) {
    if (container.count(operand) == 0) {
        return false;
    }
    return true;
}

int ContaineVarible::GetValue(std::string operand) {
    return container[operand];
}