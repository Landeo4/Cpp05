#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "premier test: signer le form" << std::endl;
    try
    {
        Bureaucrat bob("bob", 15);
        bob.upgrade();
        std::cout << bob << std::endl;
        bob.downgrade();
        Form form("test", 20, 20);
        std::cout << "voici les differentes info du form avant de sign: ";
        std::cout << form.getName() << " " << form.getSign() << " " << form.getGradeExecute();
        std::cout << " " << form.getGradeSign() << std::endl;
        form.beSigned(bob);
        std::cout << "voici les differentes info du form apres avoir sign: ";
        std::cout << form.getName() << " " << form.getSign() << " " << form.getGradeExecute();
        std::cout << " " << form.getGradeSign() << std::endl;
        form.SignForm(bob);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "second test: rate la signature du form" << std::endl;
    try
    {
        Bureaucrat bob("bob", 35);
        Form form("test", 20, 20);
        form.SignForm(bob);
        std::cout << "voici les differentes info du form avant de sign: ";
        std::cout << form.getName() << " " << form.getSign() << " " << form.getGradeExecute();
        std::cout << " " << form.getGradeSign() << std::endl;
        form.beSigned(bob);
        std::cout << "voici les differentes info du form apres avoir sign: ";
        std::cout << form.getName() << " " << form.getSign() << " " << form.getGradeExecute();
        std::cout << " " << form.getGradeSign() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    // std::cout << "NEXT TEST 1" << std::endl << std::endl;
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

    // std::cout << "NEXT TEST 2" << std::endl << std::endl;
    // try
    // {
    //     Form wq("test", 20, 20);
    //     Bureaucrat bur("stephan", 14);
    //     std::cout << wq << std::endl;
    //     wq.beSigned(bur);
    //     wq.SignForm(bur);
    // }
    // catch(std::exception & e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << "NEXT TEST 3" << std::endl << std::endl;
    // try
    // {
    //     Form wq("test2", 20, 20);
    //     Bureaucrat bur("stephan", 50);
    //     std::cout << wq << std::endl;
    //     wq.beSigned(bur);
    //     wq.SignForm(bur);
    // }
    // catch(std::exception & e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
}

// je dois test: les exeption grade too high and low
// surcharge d'operateur (good)
// beSigned()
//signForm output

//