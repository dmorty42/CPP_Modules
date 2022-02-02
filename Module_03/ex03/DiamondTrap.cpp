//
// Created by dmorty on 02.02.2022.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    this->name = "noname";
    ClapTrap::name = "noname_clap_name";
    this->hp = FragTrap::hp;
    this->mp = ScavTrap::mp;
    this->damage = FragTrap::damage;
    std::cout << "DiamondTrap default constructor called"
              << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    this->hp = FragTrap::hp;
    this->mp = ScavTrap::mp;
    this->damage = FragTrap::damage;
    std::cout << "DiamondTrap constructor called with Name parameter"
        << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &a) : ClapTrap(), FragTrap(), ScavTrap(){
    this->name = a.name;
    ClapTrap::name = a.name + "_clap_name";
    this->hp = a.hp;
    this->damage = a.damage;
    this->mp = a.mp;
    std::cout << "DiamondTrap copy constructor called"
              << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &a) {
    this->name = a.name;
    ClapTrap::name = a.name + "_clap_name";
    this->hp = a.hp;
    this->damage = a.damage;
    this->mp = a.mp;
    return (*this);
    std::cout << "DiamondTrap assigment operator called"
        <<  std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called"
        << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name is " << this->name
        << ". ClapTrap name is " << ClapTrap::name
        << std::endl;
}

void DiamondTrap::showAll() {
    std::cout << "My name is " << this->name
        << "! I have " << this->hp << " hit points, "
        << this->mp << " energy points, " << this->damage
        << " attack points!" << std::endl;
}
