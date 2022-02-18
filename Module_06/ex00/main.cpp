//
// Created by Darkside Morty on 2/18/22.
//

#include "Caster.hpp"

int main(int argc, char **argv) {
    if (argc == 2) {
        Caster one(argv[1]);
        one.printChar();
        one.printInt();
        one.printFloat();
        one.printDouble();
    }
    else
        std::cout << "Error!" << std::endl;
}
