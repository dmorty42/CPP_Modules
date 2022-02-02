//
// Created by Darkside Morty on 2/2/22.
//

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "iostream"
#include "string"

class ICharacter;

class AMateria {
protected:
    std::string type;
public:
    AMateria();
    AMateria(std::string& type);
    AMateria(const AMateria& a);
    AMateria& operator=(const AMateria& a);
    virtual ~AMateria();
    std::string const& getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

};


#endif
