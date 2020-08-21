#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>
#include "src/calculate.h"

bool CheckArgument(std::string line) {
    std::vector<std::string> conteiner;
    std::stringstream input(line);
    while(getline(input, line, ' ')) {
        conteiner.push_back(line);
    }
    return conteiner.size() != 1;
}

int main(int argc, char** argv) {
    ContaineVarible content;

    while (true) {
        std::cout << ":>";
        std::string line;
        getline(std::cin, line);
        if (line.find("quit") != std::string::npos && CheckArgument(line)) {
            std::cerr << "Invalid input\n";
        }
        else {
            return 0;
        }
        Calculate expressions(line, content);

    }
    return 0;
}
