//
// Created by Darkside Morty on 2/2/22.
//

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
public:
    Ice();
    Ice(std::string& type);
    Ice(const Ice& a);
    Ice& operator=(const Ice& a);
    virtual ~Ice();
    std::string const& getType() const;
    virtual Ice* clone() const;
    virtual void use(ICharacter& target);
};


#endif
