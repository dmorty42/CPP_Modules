//
// Created by Darkside Morty on 2/3/22.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "iostream"
#include "string"

class Bureaucrat {
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& a);
    Bureaucrat& operator=(const Bureaucrat& a);
    ~Bureaucrat();
    void setGrade(int grade);
    const std::string& getName() const;
    const int& getGrade() const;
    Bureaucrat& operator++();
    Bureaucrat& operator--();
    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat &a);

#endif
