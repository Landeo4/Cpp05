#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    public:
    Intern();
    Intern(Intern *form);
    Intern(const Intern & copy);
    Intern &operator=(const Intern& copy);
    ~Intern();

    AForm* makeForm(std::string name, std::string target);
    private:
};

#endif