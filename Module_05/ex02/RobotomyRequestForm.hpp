//
// Created by dmorty on 14.02.2022.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "cmath"

class RobotomyRequestForm : public Form {
private:
    std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& a);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& a);
    ~RobotomyRequestForm();
    virtual void execute(Bureaucrat const& executor) const;
};


#endif
