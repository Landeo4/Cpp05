#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern & copy)
{
    *this = copy;
}

Intern & Intern:: operator=(const Intern& copy)
{
	if (this != &copy)
	{
		*this = copy;
	}
	return *this;
}

Intern::~Intern()
{

}

AForm* Intern::makeForm(std::string name, std::string target)
{

    AForm *ptr = NULL;
    if ((name.compare("presidential pardon") != 0 && name.compare("shruberry creation") != 0
        && name.compare("robotomy request") != 0))
        {
            std::cout << "Please put a valid Form" << std::endl;
            return ptr;
        }

    std::cout << "Intern create " << name << std::endl;
    switch (name[0])
    {
        case 'p' :
        {
            PresidentialPardonForm* ptr = new PresidentialPardonForm(target);
            return ptr;
        }
        case 's' :
        {
            ShrubberyCreationForm* ptr = new ShrubberyCreationForm(target);
            return ptr;
        }
        case 'r' :
            RobotomyRequestForm* ptr = new RobotomyRequestForm(target);
            return ptr;
    }
    return ptr;
}
