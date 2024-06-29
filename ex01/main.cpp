#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat wq("bob", 15);
        wq.upgrade();
        wq.downgrade();
        Bureaucrat("bob", 151);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat wq("bob", 15);
        wq.downgrade();
        wq.downgrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
