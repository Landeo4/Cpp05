#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _Name) : AForm(_Name, 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(AForm* form)
{
    this->_target = form;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy)
{
    *this = copy;
}

ShrubberyCreationForm & ShrubberyCreationForm:: operator=(const ShrubberyCreationForm& copy)
{
	if (this != &copy)
	{
		this->_target = copy._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    if (this->getGradeSign() == 145 && this->getGradeExecute() == 137)
    {
        std::string    filename = this->getName() + "_shrubbery"; 
        std::ofstream out(filename.c_str());
        out.exceptions(std::ofstream::failbit | std::ofstream::badbit);
        out<<
        "\n\n\n            .        +          .      .          ."
        "\n     .            _        .                    ."
        "\n  ,              /;-._,-.____        ,-----.__"
        "\n ((        .    (_:#::_.:::. `-._   /:, /-._, `._,"
        "\n  `                 i   _|`'=:_::.`.);  i __/ /"
        "\n                      ,    `./  i:. `.   )==-'  ."
        "\n    .      ., ,-=-.  ,i, +#./`   i:.  / /           ."
        "\n.           i/:/`-' , ,i '` ` `   ): , /_  -o"
        "\n       .    /:+- - + +- : :- + + -:'  /(o-) i)     ."
        "\n  .      ,=':  i    ` `/` ' , , ,:' `'--'.--'---._/`7"
        "\n   `.   (    i: i,-._` ` + 'i, ,'   _,--._,---':.__/"
        "\n              i:  `  X` _| _,i/'   .-'"
        "\n.               ':._:`i____  /:'  /      .           ."
        "\n                    i::.  :i/:'  /              +"
        "\n   .                 `.:.  /:'  }      ."
        "\n           .           ):_(:;   i           ."
        "\n                      /:. _/ ,  |"
        "\n                   . (|::.     ,`                  ."
        "\n     .                |::.    {i"
        "\n                      |::.i  i `."
        "\n                      |:::(i    |"
        "\n              O       |:::/{ }  |                  (o"
        "\n               )  ___/#i::`/ (O '==._____   O, (O  /`"
        "\n          ~~~w/w~'~~,i` `:/,-(~`'~~~~~~~~'~o~i~/~w|/~"
        "\n      ~~~~~~~~~~~~~~~~~~~~~~~iiW~~~~~~~~~~~~i|/~~"<<std::endl;
        out.close();
    }
    else
        throw ExecuteProblem();
}

/*
void RobotomyRequestForm::execute(AForm form)
{
    std::cout << " Some drilling noises " << std::endl;
    int j = rand();
    if (j > (RAND_MAX / 2))
        std::cout << form.getName() << " has been robotomized" << std::endl;
    else
        std::cout << "the robotomy failed" << std::endl;
}
void PresidentialPardonForm::execute(AForm form)
{
    std::cout << form.getName() << " has been pardoned by Zaphod Beeblerox" << std::endl;
}

*/