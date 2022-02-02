//
// Created by Darkside Morty on 2/2/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal default constructor called!"
              << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a) : type(a.type){
    std::cout << "WrongAnimal copy constructor called!"
              << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called!"
              << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a) {
    this->type = a.type;
    std::cout << "WrongAnimal assigment operator called!"
              << std::endl;
    return (*this);
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound is undefined!"
              << std::endl;
}

std::string WrongAnimal::getType() const {
    return (type);
}

void WrongAnimal::setType(std::string type) {
    this->type = type;
}
