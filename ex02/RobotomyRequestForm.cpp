#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(NULL, 0, 0)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string _Name) : AForm(_Name, 72, 45)
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

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= this->getGradeSign())
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
