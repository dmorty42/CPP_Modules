//
// Created by Darkside Morty on 2/1/22.
//

#include "FragTrap.hpp"

int main(void) {
    FragTrap a;
    FragTrap b("Marry");
    FragTrap c(b);

    a.highFiveGuys();
    b.attack("Someone");
    c.takeDamage(10);
}
