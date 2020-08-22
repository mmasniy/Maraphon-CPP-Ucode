#pragma once
#include <iostream>
#include <map>

class ContaineVarible {
public:
    bool HasVariable(std::string operand);
    int GetValue(std::string operand);

private:
    std::map<std::string, int> container;
};

