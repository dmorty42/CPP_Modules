//
// Created by Darkside Morty on 2/24/22.
//

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include "iostream"
#include "stack"

template<typename T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack<T>() {}
    ~MutantStack<T>(){}
    MutantStack<T>(const MutantStack<T>& a) {
        this->c = a.c;
    }
    MutantStack<T>& operator=(const MutantStack<T>& a) {
        this->c = a.c;
    }
    iterator begin() {
        return (this->c.begin());
    }
    iterator end() {
        return (this->c.end());
    }
};

#endif
