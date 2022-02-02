//
// Created by dmorty on 02.02.2022.
//

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& a);
    DiamondTrap& operator=(const DiamondTrap& a);
    ~DiamondTrap();
    void attack(const std::string& target);
    void whoAmI();
    void showAll();
};


#endif
