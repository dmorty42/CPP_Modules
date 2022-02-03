//
// Created by Darkside Morty on 2/2/22.
//

#include "Cure.hpp"

Cure::Cure() {
    type = "cure";
    std::cout << "Cure default constructor called!"
              << std::endl;
}

Cure::Cure(std::string &type) {
    this->type = type;
    std::cout << "Cure constructor called with parameter Type!"
              << std::endl;
}

Cure::Cure(const Cure &a) {
    this->type = a.getType();
    std::cout << "Cure copy constructor called!"
              << std::endl;
}

Cure &Cure::operator=(const Cure &a) {
    this->type = a.type;
    std::cout << "Cure assigment operator called!"
              << std::endl;
    return (*this);
}

Cure::~Cure() {
    std::cout << "Cure destructor called!"
              << std::endl;
}

const std::string &Cure::getType() const {
    return (type);
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName()
              << "'s wounds *" << std::endl;
}

Cure *Cure::clone() const {
    return (new Cure());
}
