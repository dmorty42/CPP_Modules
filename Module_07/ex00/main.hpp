//
// Created by Darkside Morty on 23/02/2022.
//

#ifndef MAIN_HPP
#define MAIN_HPP

#include "iostream"


template<typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
T min(T& a, T& b) {
    if (a > b)
        return (b);
    if (a < b)
        return (a);
    return (b);
}

template<typename T>
T max(T& a, T& b) {
    if (a > b)
        return (a);
    if (a < b)
        return (b);
    return (b);
}

#endif
