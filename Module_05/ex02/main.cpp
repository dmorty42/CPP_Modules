//
// Created by dmorty on 14.02.2022.
//

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat bob("bob", 15);
    Form *one = new ShrubberyCreationForm("jane");
    Form *two = new RobotomyRequestForm("bob");
    Form *three = new PresidentialPardonForm("marry");
    bob.signForm(*two);
    bob.signForm(*one);
    bob.signForm(*three);
    bob.executeForm(*one);
    bob.executeForm(*three);
    for (int i = 0; i < 5; ++i) {
        bob.executeForm(*two);
    }
}
