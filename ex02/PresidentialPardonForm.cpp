#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{

}

PresidentialPardonForm::PresidentialPardonForm(AForm form)
{
    this->_target = &form;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy)
{
    *this = copy;
}

PresidentialPardonForm & PresidentialPardonForm:: operator=(const PresidentialPardonForm& copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void PresidentialPardonForm::execute(AForm form)
{
    std::cout << form.getName() << " has been pardoned by Zaphod Beeblerox" << std::endl;
}
