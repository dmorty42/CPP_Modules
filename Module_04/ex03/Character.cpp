//
// Created by Darkside Morty on 2/3/22.
//

#include "Character.hpp"

Character::Character() {
    std::cout << "Character default constructor called!"
              << std::endl;
}

Character::Character(const std::string &name) {
    this->name = name;
    std::cout << "Character constructor called with parameter Name!"
              << std::endl;
}

Character::Character(const Character &a) {
    this->name = a.getName();
    for (int i = 0; i < 4; ++i) {
        inventory[i] = a.inventory[i];
    }
    std::cout << "Character copy constructor called!"
              << std::endl;
}

Character &Character::operator=(const Character &a) {
    this->name = a.name;
    for (int i = 0; i < 4; ++i) {
        if (inventory[i])
            delete(inventory[i]);
        inventory[i] = a.inventory[i];
    }
    std::cout << "Character assigment operator called!"
              << std::endl;
    return (*this);
}

Character::~Character() {
    for (int i = 0; i < 4; ++i) {
        if (inventory[i])
            delete(inventory[i]);
    }
    for (int i = 0; i < 10; ++i) {
        if (unequiped[i])
            delete(unequiped[i]);
    }
    std::cout << "Character destructor called!"
              << std::endl;
}

const std::string &Character::getName() const {
    return (name);
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < 4; ++i) {
        if (!inventory[i]) {
            inventory[i] = m;
            std::cout << name << " equip " << m->getType() <<
                      " to slot " << i + 1 << "!" << std::endl;
            return;
        }
    }
    std::cout << "Can't equip, inventory is full!" << std::endl;
    delete(m);
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3) {
        std::cout << "Wrong index!" << std::endl;
        return;
    }
    for (int i = 0; i < 4; ++i) {
        if (inventory[i] && i == idx) {
            for (int j = 0; j < 10; ++j) {
                if (!unequiped[j]) {
                    unequiped[j] = inventory[i];
                    break;
                }
            }
            inventory[i] = 0;
            std::cout << "Slot " << i << " was unequipped!"
                << std::endl;
            return;
        }
    }
    std::cout << "Nothing found in slot " << idx << " !"
        << std::endl;
}

void Character::use(int idx, ICharacter &target) {
    if (idx < 0 || idx > 3) {
        std::cout << "Wrong index!" << std::endl;
        return;
    }
    for (int i = 0; i < 4; ++i) {
        if (inventory[i] && i == idx) {
            inventory[i]->use(target);
            return;
        }
    }
    std::cout << "Nothing found in slot " << idx << " !"
              << std::endl;
}
