//
// Created by Darkside Morty on 1/31/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hp(10), mp(10), damage(0){
    std::cout << "ClapTrap default constructor called!"
              << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), mp(10), damage(0){
    std::cout << "ClapTrap constructor called with parameter Name!"
              << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a) : name(a.name), hp(a.hp), mp(a.mp), damage(a.damage) {
    std::cout << "ClapTrap copy constructor called!"
        << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int mp, int damage) : name(name), hp(hp),
                                    mp(mp), damage(damage) {
    std::cout << "ClapTrap constructor called with all parameter!"
              << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &a) {
    this->damage = a.damage;
    this->hp = a.hp;
    this->mp = a.mp;
    this->name = a.name;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called!"
        << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (mp <= 0)
        std::cout << "ClapTrap " << name << " can't attacks "
                  << target << ", because it haven't enough energy!"
                  << std::endl;
    else {
        std::cout << "ClapTrap " << name << " attacks "
            << target << ", causing " << damage
            << " points of damage!" << std::endl;
        mp -= 1;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (mp <= 0)
        std::cout << "ClapTrap " << name << " can't be repaired "
                   << ", because it haven't enough energy!"
                  << std::endl;
    else {
        std::cout << "ClapTrap " << name << " was repaired! "
            << std::endl;
        mp -= 1;
        hp += amount;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << name << " has taken "
        << amount << " points of damage!" << std::endl;
    hp -= amount;
}
