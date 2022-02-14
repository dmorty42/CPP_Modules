//
// Created by dmorty on 14.02.2022.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {
    std::cout << "RobotomyRequestForm default constructor called!"
              << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45),
                                                                   target(target) {
    std::cout << "RobotomyRequestForm constructor called with all parameters!"
              << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a) : Form(a),
                                                                               target(a.target) {
    std::cout << "RobotomyRequestForm copy constructor called!"
              << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &a) {
    Form::operator=(a);
    this->target = a.target;
    std::cout << "RobotomyRequestForm assigment operator called!"
              << std::endl;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called!"
              << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (!this->getIsSign())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
    std::cout << "Makes some drilling noises!" << std::endl;
    if (rand() % 2)
        std::cout << target << " has been robotomized successfully!"
            << std::endl;
    else
        std::cout << target << " hasn't been robotomized! Error!"
            << std::endl;
}
