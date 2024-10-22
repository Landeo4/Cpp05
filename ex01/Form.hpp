#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
    Form(std::string _name,int gradeSI, int gradeEX);
    ~Form();
    Form(const Form & copy);
    Form &operator=(const Form & copy);

    class GradeTooLowExeption : public std::exception
    {
        public:
        const char* what() const throw()
        {
            return ("A problem happen when trying to signed (too low)");
        }
    };

    class GradeTooHighExeption : public std::exception
    {
        public:
        const char* what() const throw()
        {
            return ("A problem happen when trying to signed (too high)");
        }
    };

    std::string getName(void);
    bool getSign(void);
    int getGradeSign(void);
    int getGradeExecute(void);
    void beSigned(Bureaucrat bur);
    void SignForm(Bureaucrat bur);

    private:
    const std::string _Name;
    bool _sign;
    const int _gradeSign;
    const int _gradeExecute;
};

std::ostream & operator<<(std::ostream & o, Form & nb);

#endif