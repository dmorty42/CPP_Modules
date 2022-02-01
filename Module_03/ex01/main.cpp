//
// Created by Darkside Morty on 2/1/22.
//

#include "ScavTrap.hpp"

int main(void) {
    ScavTrap a;
    ScavTrap b("Marry");
    ScavTrap c(b);

    a.attack("Michael");
    b.guardGate();
    c.takeDamage(10);
}
