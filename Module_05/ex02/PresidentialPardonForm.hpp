//
// Created by dmorty on 14.02.2022.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{
private:
    std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& a);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& a);
    ~PresidentialPardonForm();
    virtual void execute(Bureaucrat const& executor) const;
};


#endif
