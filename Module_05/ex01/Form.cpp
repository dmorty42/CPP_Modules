//
// Created by Darkside Morty on 2/3/22.
//

#include "Form.hpp"

Form::Form() : gradeToSign(0), gradeToExecute(0) {
    std::cout << "Form default constructor called!"
              << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name) , isSign(false),
        gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        std::cout << "Grade is too low!" << std::endl;
    else if (gradeToSign > 150 || gradeToExecute > 150)
        std::cout << "Grade is too high!" << std::endl;
    std::cout << "Form constructor called with all parameters!"
              << std::endl;
}

Form::Form(const Form &a) : name(a.getName()), isSign(a.getIsSign()),
                            gradeToSign(a.gradeToSign), gradeToExecute(a.gradeToExecute) {
    std::cout << "Form copy constructor called!"
              << std::endl;
}

Form &Form::operator=(const Form &a) {
    isSign = a.getIsSign();
    std::cout << "Form assigment operator called!"
              << std::endl;
    return (*this);
}

Form::~Form() {
    std::cout << "Form destructor called!"
              << std::endl;
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low!");
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high!");
}

const bool &Form::getIsSign() const {
    return (isSign);
}

const std::string &Form::getName() const {
    return (name);
}

const int& Form::getGradeToSign() const {
    return (gradeToSign);
}

const int& Form::getGradeToExecute() const {
    return (gradeToExecute);
}

std::ostream& operator<<(std::ostream& out, const Form &a) {
    out << a.getName() << ", grade needed for sign is " << a.getGradeToSign()
        << ", grade needed for executing " << a.getGradeToExecute()
        << ". Form is signed: ";
    if (a.getIsSign())
        std::cout << "true!";
    else
        std::cout << "false!";
    return (out);
}

void Form::beSigned(const Bureaucrat &a) {
        if (a.getGrade() > gradeToSign)
           throw Form::GradeTooLowException();
        else
            isSign = true;
}
