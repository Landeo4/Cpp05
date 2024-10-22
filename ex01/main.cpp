#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat wq("bob", 15);
        wq.upgrade();
        std::cout << wq << std::endl;
        wq.downgrade();
        Bureaucrat("bob", 151);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "NEXT TEST 1" << std::endl << std::endl;
    try
    {

        Bureaucrat wq("bob", 15);
        std::cout << wq << std::endl;
        wq.downgrade();
        wq.downgrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "NEXT TEST 2" << std::endl << std::endl;
    try
    {
        Form wq("test", 20, 20);
        Bureaucrat bur("stephan", 14);
        std::cout << wq << std::endl;
        wq.beSigned(bur);
        wq.SignForm(bur);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "NEXT TEST 3" << std::endl << std::endl;
    try
    {
        Form wq("test2", 20, 20);
        Bureaucrat bur("stephan", 50);
        std::cout << wq << std::endl;
        wq.beSigned(bur);
        wq.SignForm(bur);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}

// je dois test: les exeption grade too high and low
// surcharge d'operateur (good)
// beSigned()
//signForm output

//