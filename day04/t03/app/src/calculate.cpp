#include <regex>
#include "calculate.h"

Calculate::Calculate(std::string &line, ContaineVarible &contant) {
    std::smatch result;
    int value = std::regex_match(line, result, std::regex(R"lit(\s*)lit"));
}
