#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iomanip>
#include "AForm.hpp"

class AForm;

class PresidentialPardonForm
{
    public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(AForm form);
    PresidentialPardonForm(const PresidentialPardonForm & copy);
    PresidentialPardonForm &operator=(const PresidentialPardonForm& copy);
    ~PresidentialPardonForm();

    void execute(AForm form);
    private:
    AForm* _target;
};

#endif