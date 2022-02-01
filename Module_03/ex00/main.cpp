//
// Created by Darkside Morty on 2/1/22.
//

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap a("Henry");
    ClapTrap b;

    a.attack("Marry");
    b.takeDamage(10);
    b.beRepaired(3);
}
