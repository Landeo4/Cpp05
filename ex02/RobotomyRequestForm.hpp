#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string Name);
    RobotomyRequestForm(AForm *form);
    RobotomyRequestForm(const RobotomyRequestForm & copy);
    RobotomyRequestForm &operator=(const RobotomyRequestForm& copy);
    ~RobotomyRequestForm();

    void execute(Bureaucrat const & executor) const;

    private:
    AForm* _target;
};

#endif