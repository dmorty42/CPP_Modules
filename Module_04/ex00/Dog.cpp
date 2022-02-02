//
// Created by Darkside Morty on 2/2/22.
//

#include "Dog.hpp"

Dog::Dog() {
    setType("Dog");
    std::cout << "Dog default constructor called!"
        << std::endl;
}

Dog::Dog(const Dog &a) {
    this->type = a.getType();
    std::cout << "Dog copy constructor called!"
     << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called!"
        << std::endl;
}

Dog &Dog::operator=(const Dog &a) {
    this->type = a.getType();
    std::cout << "Dog assigment operator called!"
        << std::endl;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Dog says GAV!"
        << std::endl;
}
