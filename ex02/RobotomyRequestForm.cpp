#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{

}

RobotomyRequestForm::RobotomyRequestForm(AForm* form)
{
    this->_target = form;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy)
{
    *this = copy;
}

RobotomyRequestForm & RobotomyRequestForm:: operator=(const RobotomyRequestForm& copy)
{
	if (this != &copy)
	{
		this->_target = copy._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execute(Bureaucrat const & form)
{
    if (this->getGradeSign() == 72 && this->getGradeExecute() == 45)
    {
        std::cout << " Some drilling noises " << std::endl;
        int j = rand();
        if (j > (RAND_MAX / 2))
            std::cout << this->getName() << " has been robotomized" << std::endl;
        else
            std::cout << "the robotomy failed" << std::endl;
    }
    else
        throw ExecuteProblem();
}
