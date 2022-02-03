//
// Created by Darkside Morty on 2/3/22.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        buff[i] = 0;
    }
    std::cout << "MateriaSource default constructor called!"
              << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &a) {
    for (int i = 0; i < 4; ++i) {
        buff[i] = a.buff[i];
    }
    std::cout << "MateriaSource copy constructor called!"
              << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &a) {
    for (int i = 0; i < 4; ++i) {
        if (buff[i])
            delete(buff[i]);
        buff[i] = a.buff[i];
    }
    std::cout << "MateriaSource assigment operator called!"
              << std::endl;
    return (*this);
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        if (buff[i])
            delete(buff[i]);
    }
    std::cout << "MateriaSource destructor called!"
              << std::endl;
}

void MateriaSource::learnMateria(AMateria *a) {
    for (int i = 0; i < 4; ++i) {
        if (!buff[i]) {
            buff[i] = a;
            std::cout << "Materia " << a->getType()
            << " added!" << std::endl;
            return;
        }
    }
    std::cout << "No space left!" << std::endl;
    delete(a);
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < 4; ++i) {
        if (buff[i] && !type.compare(buff[i]->getType())) {
            std::cout << "Type is found!" << std::endl;
            return (buff[i]->clone());
        }
    }
    std::cout << "Type is unknown!" << std::endl;
        return (0);
}
