//
// Created by dmorty on 02.02.2022.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    hp = 100;
    mp = 100;
    damage = 30;
    std::cout << "FragTrap default constructor called"
        << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30){
    std::cout << "FragTrap constructor called with parameter Name"
              << std::endl;
}

FragTrap::FragTrap(const FragTrap &a) : ClapTrap(a.name, a.hp, a.mp, a.damage){
    std::cout << "FragTrap copy constructor called"
              << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &a) {
    name = a.name;
    hp = a.hp;
    mp = a.mp;
    damage = a.damage;
    std::cout << "FragTrap assigment operator called"
        << std::endl;
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called"
              << std::endl;
}

void FragTrap::highFiveGuys() {
    std::cout << "High Five Guys!"
        << std::endl;
}
