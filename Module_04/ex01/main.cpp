//
// Created by Darkside Morty on 2/2/22.
//

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

    Animal *zoo[10];

    for (int i = 0; i < 10; ++i) {
        if (i % 2)
            zoo[i] = new Cat();
        else
            zoo[i] = new Dog();
    }
    for (int i = 0; i < 10; ++i) {
        std::cout << "My number is " << i
        << ". I am " << zoo[i]->getType() << "!";
        zoo[i]->makeSound();
        delete(zoo[i]);
    }
    return 0;

//    const Animal* j = new Dog();
//    const Animal* i = new Cat();
//    delete j;//should not create a leak
//    delete i;
//    return 0;
}
