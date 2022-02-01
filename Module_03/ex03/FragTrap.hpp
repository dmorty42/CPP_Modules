//
// Created by dmorty on 02.02.2022.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &a);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &a);
    void highFiveGuys(void);
};


#endif
