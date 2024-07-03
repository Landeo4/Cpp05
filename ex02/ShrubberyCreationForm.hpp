#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include <iostream>
#include <exception>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
    public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(AForm *form);
    ShrubberyCreationForm(const ShrubberyCreationForm & copy);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm& copy);
    ~ShrubberyCreationForm();

    // void ShrubberyCreationForm::execute(Bureaucrat const & form);

    private:
    AForm* _target;
};

#endif