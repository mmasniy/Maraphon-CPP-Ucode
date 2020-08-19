
#include <string>
#include <map>
#include <fstream>
#include <iostream>
#include <regex>
#include <utility>


void CheckLineAndAdd(std::multimap<std::string, std::string>& library, std::ifstream& stream) {
    std::string line;
    while(getline(stream, line)) {
         std::smatch result;
         if (std::regex_match(line, result, std::regex(R"lit(\s*"([^"]+)"\s*:\s*"([^"]+)"\s*)lit"))) {
             library.insert(std::make_pair(result.str(1), result.str(2)));
         }
    }
}

void PrintLibrary(std::multimap<std::string, std::string> &library, const std::string& author) {
    int count = 1;
    std::cout << author << ":\n";
    for (const auto& lib : library) {
        if (lib.first == author) {
            std::cout << " " << count++ << ". " << lib.second << std::endl;
        }
    }
}

int main(int argc, char** argv) {
    std::multimap<std::string, std::string> library;
    if (argc == 2) {
        std::ifstream fin(argv[1]);
        if (fin.is_open()) {
            CheckLineAndAdd(library, fin);
            for (auto iter = library.begin(); iter != library.end(); iter = library.upper_bound(iter->first) ) {
                PrintLibrary(library, iter->first);
            }
        }
        else {
            std::cerr << "error" << std::endl;
        }
    }
    else {
        std::cerr << "usage: ./tesLibrary [file_name]" << std::endl;
    }

    return 0;
}
