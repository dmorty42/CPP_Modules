//
// Created by Darkside Morty on 23/02/2022.
//

#include "iter.hpp"

template<typename T>
void ft_toupper(T &i) {
    std::cout << (char)toupper(i);
}

int main()
{
    std::string array = "abcdefg";
    ::iter(array.c_str(), 7, ft_toupper);
}
