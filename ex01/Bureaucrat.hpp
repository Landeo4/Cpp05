#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    public:
    Bureaucrat(std::string Name, int grade);
    ~Bureaucrat();

    class GradeTooHighException : public std::exception
    {
        public:
        const char* what() const throw()
        {
            return ("A problem when trying to downgrade the Bureaucrat ");
        }
    };
    class GradeTooLowException :  public std::exception
    {
        public:
        const char* what() const throw()
        {
            return ("A problem when trying to upgrade the Bureaucrat ");
        }
    };

    std::string getName(void);
    int getGrade(void);
    void upgrade();
    void downgrade();
    void signForm(Form* form);

    private:
    std::string message;
    const std::string _Name;
    int _Grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & nb);

#endif