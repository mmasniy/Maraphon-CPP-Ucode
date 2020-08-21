#pragma once
#include <iostream>
#include <map>


class ContaineVarible {


    private:
    std::map<std::string, int> container;
};

class Calculate {
    public:
    Calculate(std::string& line, ContaineVarible& contant);
    enum Operation {
        addition,
        subtraction,
        multiplication,
        division
    };
    private:
    int operand1, operand2;
    ContaineVarible table;
    Operation operation;
};
