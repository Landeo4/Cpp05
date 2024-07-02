#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Bureaucrat.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Bureaucrat;

class AForm
{
    public:
    AForm(void);
    AForm(std::string _name,int gradeSI, int gradeEX);
    ~AForm();
    AForm(const AForm & copy);
    AForm &operator=(const AForm & copy);

    class GradeTooLowExeption : public std::exception
    {
        public:
        const char* what() const throw()
        {
            return ("A problem happen when trying to signed ");
        }
    };

    class GradeTooHighExeption : public std::exception
    {
        public:
        const char* what() const throw()
        {
            return ("A problem when trying to downgrade the Bureaucrat ");
        }
    };

    std::string getName(void);
    bool getSign(void);
    int getGradeSign(void);
    int getGradeExecute(void);
    void beSigned(Bureaucrat bur);
    void SignForm(Bureaucrat bur);
    void execute(Bureaucrat const & executor) const ;
    bool executeFormAction(std::string name);

    private:
    const std::string _Name;
    bool _sign;
    const int _gradeSign;
    const int _gradeExecute;
};

std::ostream & operator<<(std::ostream & o, AForm & nb);

#endif