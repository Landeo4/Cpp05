#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string _Name);
    PresidentialPardonForm(AForm *form);
    PresidentialPardonForm(const PresidentialPardonForm & copy);
    PresidentialPardonForm &operator=(const PresidentialPardonForm& copy);
    ~PresidentialPardonForm();

    virtual void execute(Bureaucrat const & executor) const;

    private:
    AForm* _target;
};

#endif