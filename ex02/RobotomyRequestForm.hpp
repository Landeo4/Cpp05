#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm
{
    public:
    RobotomyRequestForm(std::string Name);
    RobotomyRequestForm(AForm *form);
    RobotomyRequestForm(const RobotomyRequestForm & copy);
    RobotomyRequestForm &operator=(const RobotomyRequestForm& copy);
    ~RobotomyRequestForm();

    void RobotomyRequestForm::execute(Bureaucrat const & form);

    private:
    AForm* _target;
};

#endif