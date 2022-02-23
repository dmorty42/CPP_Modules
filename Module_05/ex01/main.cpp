//
// Created by Darkside Morty on 2/3/22.
//

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("bob", 101);
    Form    b("first", 100, 10);
//    b.beSigned(a);
    a.signForm(b);
    ++a;
    a.signForm(b);
}
