#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public:
    AForm();
    AForm(std::string _name,int gradeSI, int gradeEX);
    virtual ~AForm();
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

    class ExecuteProblem : public std::exception
    {
        public:
        const char* what() const throw()
        {
            return ("A problem happen when trying to execute the Form ");
        }
    };

    std::string getName(void) const;
    bool getSign(void) const;
    int getGradeSign(void) const;
    int getGradeExecute(void) const;
    bool beSigned(Bureaucrat bur);
    void SignForm(Bureaucrat bur);
    virtual void execute(Bureaucrat const & executor) const = 0;

    private:
    const std::string _Name;
    bool _sign;
    const int _gradeSign;
    const int _gradeExecute;
};

std::ostream & operator<<(std::ostream & o, AForm & nb);

#endif