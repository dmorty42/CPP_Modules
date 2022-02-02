//
// Created by Darkside Morty on 2/2/22.
//

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
public:
    Cure();
    Cure(std::string& type);
    Cure(const Cure& a);
    Cure& operator=(const Cure& a);
    virtual ~Cure();
    std::string const& getType() const;
    virtual Cure* clone() const;
    virtual void use(ICharacter& target);
};


#endif
