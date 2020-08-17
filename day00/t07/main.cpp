#include <iostream>
#include <vector>
#include <string>

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

void Insert(std::vector<char>& inventory) {
    char item;
    std::cin >> item;
    if (ValidateCin() || ValidateItem(item)) {
        return;
    }
    if (inventory.size() == 12) {
        std::cerr << "Inventory is full.\n";
    }
    else {
        inventory.push_back(item);
        std::cout << item << " was inserted.\n";
    }
}

void Remove(std::vector<char>& inventory) {
    char item;
    std::cin >> item;
    if (ValidateCin() || ValidateItem(item)) {
        return;
    }
    if (count(inventory.begin(), inventory.end(), item) == 0) {
        std::cerr << "Invalid item.\n";
        return;
    }
    if (inventory.size() > 0) {
        inventory.erase(find(inventory.begin(), inventory.end(), item));
        std::cout << item << " was removed.\n";
    }
}

void Show(const std::vector<char>& inventory) {
    if (ValidateCin()) {
        return;
    }
    std::cout << "Inventory { ";
    for(const auto& i : inventory) {
        std::cout << i << " ";
    }
    if (inventory.size() < 12) {
        for (int i = 12 - inventory.size(); i > 0 ; --i) {
            std::cout << "- ";
        }
    }
    std::cout << "}\n";
}

void Help() {
    if (ValidateCin()) {
        return;
    }
    std::cout << "Available commands:\n1. insert <itemType>\n2. remove <itemType>\n"
                 "3. show inventory\n4. help\n5. exit\n";
}

int main() {
    std::vector<char> inventory;
    while (true) {
        std::cout << "Enter command:> ";
        std::string command;
        std::cin >> command;
        if (command == "insert") {
            Insert(inventory);
        }
        else if (command == "remove") {
            Remove(inventory);
        }
        else if (command == "show") {
            Show(inventory);
        }
        else if (command == "help") {
            Help();
        }
        else if (command == "exit") {
            if (ValidateCin()) {
                continue;
            }
            std::cout << "Bye.\n";
            break;
        }
        else {
            std::cerr << "Invalid command.\n";
            continue;
        }
    }
    return 0;
}