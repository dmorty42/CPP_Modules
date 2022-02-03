//
// Created by Darkside Morty on 2/3/22.
//

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
//    IMateriaSource* src = new MateriaSource();
//    src->learnMateria(new Ice());
//    src->learnMateria(new Cure());
//    ICharacter* me = new Character("me");
//    AMateria* tmp;
//    tmp = src->createMateria("ice");
//    me->equip(tmp);
//    tmp = src->createMateria("cure");
//    me->equip(tmp);
//    ICharacter* bob = new Character("bob");
//    me->use(0, *bob);
//    me->use(1, *bob);
//    delete bob;
//    delete me;
//    delete src;
//    return 0;

    IMateriaSource* src = new MateriaSource();
    for (int i = 0; i < 5; ++i) {
        if (i % 2)
            src->learnMateria(new Ice());
        else
            src->learnMateria(new Cure());
    }
    ICharacter* me = new Character("me");
    AMateria* temp;
    for (int i = 0; i < 5; ++i) {
        if (i % 2) {
            temp = src->createMateria("ice");
            me->equip(temp);
        }
        else {
            temp =src->createMateria("cure");
            me->equip(temp);
        }
    }
    me->unequip(1);
    me->use(1, *me);
    me->unequip(1);
    delete(src);
    delete(me);
}
