//
// Created by Darkside Morty on 23/02/2022.
//

#include "Base.hpp"

int main()
{
    Base *ptr;
    for (int i = 0; i < 3; ++i) {
        ptr = generate();
        identify(ptr);
        delete(ptr);
    }
    for (int i = 0; i < 3; ++i) {
        ptr = generate();
        identify(*ptr);
        delete(ptr);
    }

}
