//
// Created by Darkside Morty on 2/3/22.
//

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    AMateria* buff[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource& a);
    ~MateriaSource();
    MateriaSource& operator=(const MateriaSource& a);
    void learnMateria(AMateria* a);
    AMateria* createMateria(std::string const& type);
};


#endif
