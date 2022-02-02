//
// Created by Darkside Morty on 2/2/22.
//

#include "Dog.hpp"

Dog::Dog() {
    setType("Dog");
    brain = new Brain;
    std::cout << "Dog default constructor called!"
              << std::endl;
}

Dog::Dog(const Dog &a) {
    this->brain = new Brain;
    this->type = a.getType();
    this->brain = a.brain;
    std::cout << "Dog copy constructor called!"
              << std::endl;
}

Dog::~Dog() {
    delete(brain);
    std::cout << "Dog destructor called!"
              << std::endl;
}

Dog &Dog::operator=(const Dog &a) {
    this->type = a.getType();
    this->brain = a.brain;
    std::cout << "Dog assigment operator called!"
              << std::endl;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Dog says MEOW!"
              << std::endl;
}
