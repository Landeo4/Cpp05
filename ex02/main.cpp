#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    // try
    // {
    //     Bureaucrat wq("bob", 15);
    //     wq.upgrade();
    //     std::cout << wq << std::endl;
    //     wq.downgrade();
    //     Bureaucrat("bob", 151);
    // }
    // catch (std::exception & e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    // try
    // {
    //     Bureaucrat wq("bob", 15);
    //     std::cout << wq << std::endl;
    //     wq.downgrade();
    //     wq.downgrade();
    // }
    // catch (std::exception & e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    // std::cout << "NEXT TEST" << std::endl << std::endl;
    // try
    // {
    //     AForm wq("test", 20, 20);
    //     Bureaucrat bur("stephan", 14);
    //     std::cout << wq << std::endl;
    //     wq.beSigned(bur);
    //     wq.SignForm(bur);
    // }
    // catch(std::exception & e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    // try
    // {
    //     AForm wq("test2", 20, 20);
    //     Bureaucrat bur("stephan", 50);
    //     std::cout << wq << std::endl;
    //     wq.beSigned(bur);
    //     wq.SignForm(bur);
    // }
    // catch(std::exception & e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    std::cout << "TRY POUR ARBRE" << std::endl;
    try
    {
        AForm* form = new AForm("test2", 20, 20);
        std::cout << "avant try voici le form " << form << std::endl;
        // PresidentialPardonForm wq (form);
        ShruberryCreationForm wq(form);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "TRY POUR Robo" << std::endl;
    try
    {
        AForm form("test", 10, 10);
        RobotomyRequestForm essaie(form);
        essaie.execute(form);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "TRY POUR PRESIDENT" << std::endl;
    try
    {
        AForm form("test", 10, 10);
        PresidentialPardonForm essaie(form);
        essaie.execute(form);
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
