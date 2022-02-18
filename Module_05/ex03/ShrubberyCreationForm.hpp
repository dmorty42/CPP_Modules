//
// Created by Darkside Morty on 2/3/22.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "fstream"

class ShrubberyCreationForm : public Form{
private:
    std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& a);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& a);
    ~ShrubberyCreationForm();
    virtual void execute(Bureaucrat const& executor) const;
};


#endif
