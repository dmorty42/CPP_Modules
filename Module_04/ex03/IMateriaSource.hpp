//
// Created by Darkside Morty on 2/3/22.
//

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"


class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria* a) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
