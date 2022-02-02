//
// Created by Darkside Morty on 2/2/22.
//

#include "AMateria.hpp"

AMateria::AMateria() {
    std::cout << "AMateria default constructor called!"
        << std::endl;
}

AMateria::AMateria(std::string &type) : type(type) {
    std::cout << "AMateria constructor called with parameter Type!"
              << std::endl;
}

AMateria::AMateria(const AMateria &a) : type(a.type) {
    std::cout << "AMateria copy constructor called!"
              << std::endl;
}

AMateria &AMateria::operator=(const AMateria &a) {
    this->type = a.type;
    std::cout << "AMateria assigment operator called!"
              << std::endl;
}

AMateria::~AMateria() {
    std::cout << "AMateria destructor called!"
              << std::endl;
}

const std::string &AMateria::getType() const {
    return (type);
}

void AMateria::use(ICharacter &target) {
    std::cout << "Target " << target.getName()
        << " with " << name << std::endl;
}
