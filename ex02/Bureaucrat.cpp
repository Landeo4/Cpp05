#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string Name, int grade) : _Name(Name), _Grade(grade)
{
    std::cout << "Constructor called" << std::endl;
    if (this->_Grade > 150)
    {
        throw GradeTooHighException();
        return ;
    }
    else if (this->_Grade < 0)
    {
        throw GradeTooLowException();
        return ;
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

std::string Bureaucrat:: getName(void)
{
    return this->_Name;
}

int Bureaucrat::getGrade(void)
{
    return this->_Grade;
}

void Bureaucrat:: upgrade()
{
    if (this->_Grade == 1)
    {
        throw GradeTooLowException();
    }
    std::cout << "The bureaucrate " << this->_Name << " got upgraded (" << this->_Grade << " to " << this->_Grade - 1 << ")" << std::endl;
    this->_Grade -= 1;
}

void Bureaucrat:: downgrade()
{
    if (this->_Grade == 150)
    {
        throw GradeTooHighException();
    }
    std::cout << "The bureaucrate " << this->_Name << " got downgraded (" << this->_Grade << " to " << this->_Grade + 1 << ")" << std::endl;
    this->_Grade += 1;
}

void Bureaucrat::signForm(AForm* form)
{
    if (form->getSign() == 1)
    {
        std::cout << Bureaucrat::getName() << " signed " <<  this->_Name << std::endl;
    }
    else
    {
        std::cout << Bureaucrat::getName() << " couldn't sign " << this->_Name << " because " << "he has no hand" << std::endl;
    }
}

std::ostream & operator<<(std::ostream & o, Bureaucrat & nb)
{
	o << nb.getName() << " Bureaucrat grade " << nb.getGrade();
    return o;
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
    }
    catch (std::exception &a)
    {
        std::cout << a.what() << std::endl;
    }
}

//std::cout << "A problem happend when trying to execute the Form" << std::endl;