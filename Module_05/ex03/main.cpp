//
// Created by dmorty on 14.02.2022.
//

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << rrf->getName() << " create successfully!" << std::endl;
}
