//
// Created by Darkside Morty on 2/2/22.
//

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
private:
    Brain *brain;
public:
    Cat();
    Cat(const Cat& a);
    virtual ~Cat();
    Cat& operator=(const Cat& a);
    virtual void makeSound() const;
};


#endif
