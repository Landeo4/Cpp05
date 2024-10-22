#include "Bureaucrat.hpp"

int main()
{
    std::cout << std::endl << "BUREAUCRAT TEST HIGH AND LOW " << std::endl;
    try
    {
        Bureaucrat low("Hold the line", 0);

    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat high("Hold the line", 151);

    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "BUREAUCRAT TEST INT_MIN INT_MAX " << std::endl;

    try
    {
        Bureaucrat low("Hold the line", -2147483648);

    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat high("Hold the line", 2147483647);

    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << std::endl << "BUREAUCRAT TEST downgrade too low and high " << std::endl;

    try
    {
        Bureaucrat low("Hold the line", 1);
        std::cout << "upgrade" << std::endl;
        low.upgrade();

    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat high("Hold the line", 150);
        std::cout << "downgrade" << std::endl;
        high.downgrade();

    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "BUREAUCRAT TEST GET_NAME GET_GRADE AND UP/DOWNGRADE " << std::endl;

    try
    {
        Bureaucrat bob("Bobby", 48);
        std::cout << "grade " << bob.getGrade() << std::endl;
        std::cout << "Name " << bob.getName() << std::endl;
        std::cout << "downgrade 5 times" << std::endl;
        bob.downgrade();
        bob.downgrade();
        bob.downgrade();
        bob.downgrade();
        bob.downgrade();
        std::cout << "grade " << bob.getGrade() << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
