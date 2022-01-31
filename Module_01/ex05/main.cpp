//
// Created by Darkside Morty on 1/31/22.
//

#include "Karen.hpp"

int main() {
    Karen karen;
    std::string level;

    while (1) {
        std::cout << "Enter your request: ";
        std::getline(std::cin, level);
        karen.complain(level);
    }
}
