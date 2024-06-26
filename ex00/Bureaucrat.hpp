#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

class Bureaucrat : public std::exception
{
    public:

    Bureaucrat(std::string Name, int grade);
    ~Bureaucrat();

    Bureaucrat(const char* msg)
        :message(msg)
        {

        }
    const char* what() const throw()
    {
        return message.c_str;
    }

    void setName(std::string Name);
    std::string getName(void);
    void setGrade(int grade);
    int getGrade(void);
    void upgrade();
    void downgrade();

    private:
    std::string message;
    const std::string _Name;
    int _Grade;

};

#endif