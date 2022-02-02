//
// Created by Darkside Morty on 2/2/22.
//

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
private:
    Brain *brain;
public:
    Dog();
    Dog(const Dog& a);
    virtual ~Dog();
    Dog& operator=(const Dog& a);
    virtual void makeSound() const;
};


#endif
