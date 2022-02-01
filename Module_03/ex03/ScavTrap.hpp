//
// Created by Darkside Morty on 2/1/22.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& a);
    ScavTrap& operator=(const ScavTrap& a);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();

};


#endif
