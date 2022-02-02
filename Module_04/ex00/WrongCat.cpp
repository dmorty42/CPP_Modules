//
// Created by Darkside Morty on 2/2/22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    setType("WrongCat");
    std::cout << "WrongCat default constructor called!"
              << std::endl;
}

WrongCat::WrongCat(const WrongCat &a) {
    this->type = a.getType();
    std::cout << "WrongCat copy constructor called!"
              << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called!"
              << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &a) {
    this->type = a.getType();
    std::cout << "WrongCat assigment operator called!"
              << std::endl;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat says MEOW!"
              << std::endl;
}
