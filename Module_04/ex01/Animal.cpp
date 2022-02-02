//
// Created by Darkside Morty on 2/2/22.
//

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal default constructor called!"
        << std::endl;
}

Animal::Animal(const Animal &a) : type(a.type){
    std::cout << "Animal copy constructor called!"
        << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called!"
        << std::endl;
}

Animal &Animal::operator=(const Animal &a) {
    this->type = a.type;
    std::cout << "Animal assigment operator called!"
        << std::endl;
    return (*this);
}

void Animal::makeSound() const {
    std::cout << "Animal sound is undefined!"
        << std::endl;
}

std::string Animal::getType() const {
    return (type);
}

void Animal::setType(std::string type) {
    this->type = type;
}
