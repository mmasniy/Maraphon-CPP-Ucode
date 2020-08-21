#include <iostream>
#include <vector>
#include <map>
#include <tuple>
#include "../utils/algorithmUtils.h"

int main(int argc, char *argv[]) {
    std::vector<int> integer = {1, 2, 3, 4, 5};
    std::map<int, int> interval = {{1, 5}, {5, 10}, {10, 15}};
    std::cerr << "IsInRange\n" << IsInRange(3, 1, 5) << std::endl;
    auto pair = std::make_pair<const int, const int>(1, 5);
    std::cerr << "\n\nIsInRange\n" << IsInRange<int>(2, pair) << std::endl;
    std::cerr << "\n\nIsInsideRange\n" << IsInsideRange(3, 1, 5) << std::endl;
    std::cerr << "\n\nIsInsideRange\n" << IsInsideRange<int>(3, pair) << std::endl;

    int a = 12;
    std::cerr << "\n\na = " << a << "\nModify\n" << Modify(a, 1) << "\na = " << a << std::endl;
    std::cerr << "\n\na = " << a << "\nModify\n" << Modify(a, 1) << "\na = " << a << std::endl;

    std::cerr << std::endl;
    RemoveAll(integer, 1);
    for (auto& i : integer) {
        std::cerr << i << " ";
    }
    std::cerr << std::endl;
    std::cerr << std::endl;

    RemoveAllIf(integer, [](int& i) {
        return i == 2;
    });

    for (auto& i : integer) {
        std::cerr << i << " ";
    }
    std::cerr << std::endl;


}
