//
// Created by Darkside Morty on 2/2/22.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "iostream"
#include "string"

class Brain {
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain& a);
    ~Brain();
    Brain& operator=(const Brain& a);
};


#endif
