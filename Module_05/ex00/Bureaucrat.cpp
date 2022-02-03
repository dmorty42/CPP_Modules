//
// Created by Darkside Morty on 2/3/22.
//

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() {
    std::cout << "Bureaucrat default constructor called!"
              << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
    this->setGrade(grade);
    std::cout << "Bureaucrat constructor called with all parameters!"
              << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &a) : name(a.getName()) {
    setGrade(a.getGrade());
    std::cout << "Bureaucrat copy constructor called!"
              << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &a) {
    setGrade(a.getGrade());
    std::cout << "Bureaucrat assigment operator called!"
              << std::endl;
    return (*this);
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destructor called!"
              << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is too low!");
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade is too high!");
}

void Bureaucrat::setGrade(int grade) {
    try
    {
        if (grade > 150)
            throw Bureaucrat::GradeTooHighException();
        if (grade < 1)
            throw Bureaucrat::GradeTooLowException();
        else
            this->grade = grade;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

const std::string &Bureaucrat::getName() const {
    return (name);
}

const int &Bureaucrat::getGrade() const {
    return (grade);
}

Bureaucrat &Bureaucrat::operator++() {
    setGrade(grade - 1);
    return (*this);
}

Bureaucrat &Bureaucrat::operator--() {
    setGrade(grade + 1);
    return (*this);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat &a) {
    out << a.getName() << ", bureaucrat grade " << a.getGrade();
    return (out);
}
