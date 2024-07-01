#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include <iomanip>
#include <fstream>
#include <iostream>
#include "AForm.hpp"

class AForm;

class ShruberryCreationForm
{
    public:
    ShruberryCreationForm(void);
    ShruberryCreationForm(AForm *form);
    ShruberryCreationForm(const ShruberryCreationForm & copy);
    ShruberryCreationForm &operator=(const ShruberryCreationForm& copy);
    ~ShruberryCreationForm();

    private:
    AForm* _target;
};

#endif