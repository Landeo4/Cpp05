#include "ShruberryCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm(void)
{

}

ShruberryCreationForm::ShruberryCreationForm(AForm* form)
{

}


ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm & copy)
{
    *this = copy;
}

ShruberryCreationForm & ShruberryCreationForm:: operator=(const ShruberryCreationForm& copy)
{
	if (this != &copy)
	{
		this->_target = copy._target;
	}
	return *this;
}

ShruberryCreationForm::~ShruberryCreationForm()
{

}

void ShruberryCreationForm::execute(AForm *form)
{
    std::cout << "debut de method" << std::endl;
    std::string file = form->getName() + "_shrubbery";
    // std::ofstream file = name;
    std::string tree;

    int save;
    int i = 10;
    int max = 10;
    int min = 10;
    std::cout << "juste avant while" << std::endl; 
    while (i < 50)
    {
        save = min;
        while (min <= max)
        {
            tree[min] = '#';
            std::cout << tree[min] << std::endl;
            min++;
            i++;
        }
        tree[min] = '\n';
        min = save - 1;
        max++;
        i++;
    }
    std::cout << "voici ce qui a ete stocker" << std::endl;
    std::cout << tree << std::endl;
    this->_target = form;
}

// la je veux passer plusieurs fois dans une boucle qui affiche
//affiche au milieu des #

//ShrubberyCreationForm: Required grades: sign 145, exec 137
// Create a file <target>_shrubbery in the working directory, and writes ASCII trees
// inside it.