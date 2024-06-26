#include "Bureaucrat.cpp"

int main()
{
    try
    {
        throw Bureaucrat("bob", 15);
    }
    catch (std::exception & e)
    {
        std::cout << "l'exeption a ete intercepter" << std::endl;
    }
}
