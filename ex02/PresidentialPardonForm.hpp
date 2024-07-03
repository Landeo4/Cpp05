#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
    public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(AForm *form);
    PresidentialPardonForm(const PresidentialPardonForm & copy);
    PresidentialPardonForm &operator=(const PresidentialPardonForm& copy);
    ~PresidentialPardonForm();

    // void PresidentialPardonForm::execute(Bureaucrat const & form);

    private:
    AForm* _target;
};

#endif