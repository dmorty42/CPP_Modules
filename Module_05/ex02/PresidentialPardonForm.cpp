//
// Created by dmorty on 14.02.2022.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 72, 45) {
    std::cout << "PresidentialPardonForm default constructor called!"
              << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 72, 45),
                                                               target(target) {
    std::cout << "PresidentialPardonForm constructor called with all parameters!"
              << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a) : Form(a),
                                                                         target(a.target) {
    std::cout << "PresidentialPardonForm copy constructor called!"
              << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &a) {
    Form::operator=(a);
    this->target = a.target;
    std::cout << "PresidentialPardonForm assigment operator called!"
              << std::endl;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destructor called!"
              << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (!this->getIsSign())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
    std::cout << target << " has been pardoned by Zaphod Beeblebrox!"
        << std::endl;
}
