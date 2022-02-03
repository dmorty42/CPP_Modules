//
// Created by Darkside Morty on 2/3/22.
//

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"


class Bureaucrat;

class Form {
private:
    const std::string name;
    bool isSign;
    const int gradeToSign;
    const int gradeToExecute;
public:
    Form();
    Form(std::string name, int gradeToSign, int gradeToExecute);
    Form(const Form& a);
    Form& operator=(const Form& a);
    ~Form();
    const std::string& getName() const;
    const bool& getIsSign() const;
    const int& getGradeToSign() const;
    const int& getGradeToExecute() const;
    void    beSigned(const Bureaucrat& a);

    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

};

std::ostream& operator<<(std::ostream& out, const Form &a);

#endif
