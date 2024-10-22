#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

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
            return ("A problem happend when trying to assign the value to the Bureaucrat (too high) ");
        }
    };
    class GradeTooLowException :  public std::exception
    {
        public:
        const char* what() const throw()
        {
            return ("A problem happend when trying to assign the value to the Bureaucrat (too low)");
        }
    };

    std::string getName(void);
    int getGrade(void);
    void upgrade();
    void downgrade();
    private:
    std::string message;
    const std::string _Name;
    int _Grade;
};

// std::ostream & operator<<( std::ostream & o, Bureaucrat const & nb);

#endif