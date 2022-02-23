//
// Created by Darkside Morty on 23/02/2022.
//

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include "algorithm"

template<typename T>
typename T::const_iterator easyFind(const T& array, int n) {
    return (std::find(array.begin(), array.end(), n));
}

#endif
