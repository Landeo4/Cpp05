#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iomanip>
#include "AForm.hpp"
#include <cstdlib>

class AForm;

class RobotomyRequestForm
{
    public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(AForm form);
    RobotomyRequestForm(const RobotomyRequestForm & copy);
    RobotomyRequestForm &operator=(const RobotomyRequestForm& copy);
    ~RobotomyRequestForm();

    private:
    AForm* _target;
};

#endif