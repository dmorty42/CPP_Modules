//
// Created by Darkside Morty on 2/2/22.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal& a);
    virtual ~Animal();
    Animal& operator=(const Animal& a);
    std::string getType() const;
    void setType(std::string type);
    virtual void makeSound() const = 0;
};


#endif
