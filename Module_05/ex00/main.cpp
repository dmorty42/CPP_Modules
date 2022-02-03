//
// Created by Darkside Morty on 2/3/22.
//

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("first", 10);
    a.setGrade(0);
    std::cout << a << std::endl;
    ++a;
    std::cout << a << std::endl;
}
