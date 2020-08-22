#include <regex>
#include "calculate.h"

int CheckOperand(std::string operand, ContaineVarible& content) {
    if (content.HasVariable(operand)) {
        return content.GetValue(operand);
    }
    else {
        return std::stoi(operand);
    }
}

Calculate::Operation AddOperation(std::string operation) {
    if (operation == "+") {
        return Calculate::Operation::addition;
    } else if (operation == "-") {
        return Calculate::Operation::subtraction;
    } else if (operation == "*") {
        return Calculate::Operation::multiplication;
    } else {
        return Calculate::Operation::division;
    }
}

Calculate::Calculate(std::string &line, ContaineVarible &content) {
    std::smatch result;
    int value = std::regex_match(line, result, std::regex(R"lit(\s*)lit"));

    operand1 = CheckOperand(result.str(1), content);
    operation = AddOperation(result.str(2));
    operand2 = CheckOperand(result.str(3), content);

}

