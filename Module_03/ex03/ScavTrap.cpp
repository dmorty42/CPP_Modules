//
// Created by Darkside Morty on 2/1/22.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    hp = 100;
    mp = 50;
    damage = 20;
    std::cout << "ScavTrap default constructor called"
        << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20){
    std::cout << "ScavTrap constructor called with parameter Name"
              << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &a) : ClapTrap(a.name, a.hp, a.mp, a.damage){
    std::cout << "ScavTrap copy constructor called"
        << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called"
        << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &a) {
    name = a.name;
    hp = a.hp;
    mp = a.mp;
    damage = a.damage;
    std::cout << "ScavTrap assigment operator called"
        << std::endl;
    return (*this);
}

void ScavTrap::attack(const std::string &target) {
    if (mp <= 0)
        std::cout << "ScavTrap " << name << " can't attacks "
                  << target << ", because it haven't enough energy!"
                  << std::endl;
    else {
        std::cout << "ScavTrap " << name << " attacks "
                  << target << ", causing " << damage
                  << " points of damage!" << std::endl;
        mp -= 1;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is in Gate Keeper mode!"
        << std::endl;
}
