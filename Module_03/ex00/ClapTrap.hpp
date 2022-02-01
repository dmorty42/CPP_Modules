//
// Created by Darkside Morty on 1/31/22.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
private:
        std::string name;
        int hp;
        int mp;
        int damage;
public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &a);
        ClapTrap &operator=(const ClapTrap &a);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif
