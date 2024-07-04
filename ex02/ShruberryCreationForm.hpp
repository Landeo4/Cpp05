#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string _Name);
    ShrubberyCreationForm(AForm *form);
    ShrubberyCreationForm(const ShrubberyCreationForm & copy);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm& copy);
    ~ShrubberyCreationForm();

    virtual void execute(Bureaucrat const & form) const;

    private:
    AForm* _target;
};

#endif