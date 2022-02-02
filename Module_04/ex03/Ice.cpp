//
// Created by Darkside Morty on 2/2/22.
//

#include "Ice.hpp"

Ice::Ice() {
    type = "ice";
    std::cout << "Ice default constructor called!"
              << std::endl;
}

Ice::Ice(std::string &type) : type(type) {
    std::cout << "Ice constructor called with parameter Type!"
              << std::endl;
}

Ice::Ice(const Ice &a) : type(a.type) {
    std::cout << "Ice copy constructor called!"
              << std::endl;
}

Ice &Ice::operator=(const Ice &a) {
    this->type = a.type;
    std::cout << "Ice assigment operator called!"
              << std::endl;
}

Ice::~Ice() {
    std::cout << "Ice destructor called!"
              << std::endl;
}

const std::string &Ice::getType() const {
    return (type);
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName()
              << " *" << std::endl;
}

Ice *Ice::clone() const {
    return (new Ice());
}
