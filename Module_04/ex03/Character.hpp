//
// Created by Darkside Morty on 2/3/22.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter{
private:
    std::string name;
    AMateria*   inventory[4];
    AMateria*   unequiped[10];
public:
    Character();
    Character(const std::string &name);
    Character(const Character& a);
    ~Character();
    Character& operator=(const Character& a);
    virtual std::string const& getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};


#endif
