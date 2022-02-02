//
// Created by Darkside Morty on 2/2/22.
//

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& a);
    ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal& a);
    std::string getType() const;
    void setType(std::string type);
    void makeSound() const;
};


#endif
