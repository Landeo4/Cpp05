#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat* wq = new Bureaucrat("bob", 15);
        wq->upgrade();
        wq->downgrade();
        Bureaucrat("bob", 151);
        delete wq;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat* wq = new Bureaucrat("bob", 149);
        wq->downgrade();
        wq->downgrade();
        delete wq;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
