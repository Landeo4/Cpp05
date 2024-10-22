#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << "TRY POUR SHRUB GOOD" << std::endl;
    // il a bespon sign 145 exec 137
    try
    {
        ShrubberyCreationForm form("good");
        Bureaucrat dan("Dan", 10);
        form.beSigned(dan);
        form.execute(dan);
        dan.executeForm(form);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "TRY POUR SHRUB BAD" << std::endl;
    try
    {
        ShrubberyCreationForm form("bad");
        Bureaucrat dan("Dan", 142);
        form.execute(dan);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << std::endl << "TRY POUR ROBO" << std::endl;
    try
    {
        RobotomyRequestForm form("good");
        Bureaucrat dan("Dan", 10);
        form.beSigned(dan);
        form.execute(dan);
        dan.executeForm(form);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl << "FLOOD POUR 50% POUR ROBO" << std::endl;
    try
    {
        RobotomyRequestForm form("good");
        Bureaucrat dan("Dan", 10);
        form.beSigned(dan);
        form.execute(dan);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        RobotomyRequestForm form("good");
        Bureaucrat dan("Dan", 10);
        form.beSigned(dan);
        form.execute(dan);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        RobotomyRequestForm form("good");
        Bureaucrat dan("Dan", 10);
        form.execute(dan);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << std::endl << "TRY POUR President" << std::endl;
    try
    {
        PresidentialPardonForm form("good");
        Bureaucrat dan("Dan", 10);
        form.beSigned(dan);
        form.execute(dan);
        dan.executeForm(form);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        PresidentialPardonForm form("good");
        Bureaucrat dan("Dan", 10);
        form.execute(dan);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}

/*
nouveau test
tester que la class Form est bien abstraite
essayer les class:
shrub
Robotomy
Presidential
essayer la method execute a la base Form
check la method pour executer l'action de la Form
verifier si ca envois bien une exeption approprier
si je peux verifier les exigences de chaque class concrete ou abstraite
verifier executeform et son cas d'erreur
*/
