//
// Created by Darkside Morty on 2/2/22.
//

#include "Cat.hpp"

Cat::Cat() {
    setType("Cat");
    brain = new Brain;
    std::cout << "Cat default constructor called!"
              << std::endl;
}

Cat::Cat(const Cat &a) {
    this->brain = new Brain;
    this->type = a.getType();
    this->brain = a.brain;
    std::cout << "Cat copy constructor called!"
              << std::endl;
}

Cat::~Cat() {
    delete(brain);
    std::cout << "Cat destructor called!"
              << std::endl;
}

Cat &Cat::operator=(const Cat &a) {
    this->type = a.getType();
    this->brain = a.brain;
    std::cout << "Cat assigment operator called!"
              << std::endl;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Cat says MEOW!"
              << std::endl;
}
