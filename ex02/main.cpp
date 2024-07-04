#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << "TRY POUR SHRUB GOOD" << std::endl;
    try
    {
        ShrubberyCreationForm form("good");
        Bureaucrat dan("Dan", 10);
        // AForm* form = new ShrubberyCreationForm("test2", 20, 20);
        std::cout << "avant try voici le form " << form << std::endl;
        form.execute(dan);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "TRY POUR SHRUB BAD" << std::endl;
    try
    {
        ShrubberyCreationForm form("bad");
        Bureaucrat dan("Dan", 142);
        // AForm* form = new ShrubberyCreationForm("test2", 20, 20);
        std::cout << "avant try voici le form " << form << std::endl;
        form.execute(dan);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << "TRY POUR Robo" << std::endl;
    // try
    // {
    //     RobotomyRequestForm form("test2");
    // }
    // catch (std::exception & e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << "TRY POUR PRESIDENT" << std::endl;
    // try
    // {
    //     AForm form("test", 10, 10);
    //     PresidentialPardonForm essaie(form);
    //     essaie.execute(form);
    // }
    // catch (std::exception & e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
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
