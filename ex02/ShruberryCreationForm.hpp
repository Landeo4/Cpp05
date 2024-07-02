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

    void execute(AForm *form);
    private:
    AForm* _target;
};

#endif