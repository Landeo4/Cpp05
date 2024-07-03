#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _Name) : AForm(_Name, 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(AForm* form)
{
    this->_target = form;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy)
{
    *this = copy;
}

PresidentialPardonForm & PresidentialPardonForm:: operator=(const PresidentialPardonForm& copy)
{
	if (this != &copy)
	{
		this->_target = copy._target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void PresidentialPardonForm::execute(Bureaucrat const & form)
{
    if (this->getGradeSign() <= 25 && this->getGradeExecute() <= 5 && this->getSign() == 1)
    {
        std::cout << this->getName() << " has been pardoned by Zaphod Beeblerox" << std::endl;
    }
    else
        throw ExecuteProblem();
}

/*
void RobotomyRequestForm::execute(AForm form)
{
    std::cout << " Some drilling noises " << std::endl;
    int j = rand();
    if (j > (RAND_MAX / 2))
        std::cout << form.getName() << " has been robotomized" << std::endl;
    else
        std::cout << "the robotomy failed" << std::endl;
}
*/
