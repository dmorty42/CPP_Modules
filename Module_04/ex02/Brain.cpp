//
// Created by Darkside Morty on 2/2/22.
//

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called!"
              << std::endl;
}

Brain::Brain(const Brain &a) {
    for (int i = 0; i < 100; ++i) {
        ideas[i] = a.ideas[i];
    }
    std::cout << "Brain copy constructor called!"
              << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor called!"
              << std::endl;
}

Brain &Brain::operator=(const Brain &a) {
    for (int i = 0; i < 100; ++i) {
        ideas[i] = a.ideas[i];
    }
    std::cout << "Brain assigment operator called!"
              << std::endl;
    return (*this);
}
