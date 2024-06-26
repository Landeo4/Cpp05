#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string Name, int grade) : _Name(Name), _Grade(grade)
{
    if (this->_Grade > 150)
    {
        std::cout << "your grade is too low please write a grade between 0 and 150" << std:endl;
        return ;
    }
    else if (this->_Grade < 0)
    {
        std::cout << "your grade is too high please write a grade between 0 and 150" << std:endl;
        return ;
    }
}

Bureaucrat::~Bureaucrat()
{

}

void Bureaucrat:: setName(std::string Name)
{
    std::cout << "cannot modify the Name of the bureaucrate" << std::endl;
}

std::string Bureaucrat:: getName(void)
{
    return this->_Name;
}

void Bureaucrat:: setGrade(int grade)
{
    std::cout << "cannot modify the grade of the bureaucrate" << std::endl;
}

int Bureaucrat::getGrade(void)
{
    return this->_Grade;
}

void Bureaucrat:: upgrade()
{
    if (this->_Grade == 1)
    {
        std::cout << "You cannot upgrade the number 1 Grade" << std::endl;
        return ;
    }
    std::cout << "The bureaucrate " << this->_Name << " got upgraded (" << this->_Grade << this->_Grade + 1 << ")" << std::endl;
    this->_Grade -= 1;
}

void Bureaucrat:: downgrade()
{
    if (this->_Grade == 150)
    {
        std::cout << "You cannot downgrade the number 150 Grade" << std::endl;
        return ;
    }
    std::cout << "The bureaucrate " << this->_Name << " got downgraded (" << this->_Grade << this->_Grade - 1 << ")" << std::endl;
    this->_Grade += 1;
}
