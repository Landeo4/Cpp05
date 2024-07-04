#include "AForm.hpp"

AForm::AForm() :  _sign(0), _gradeSign(0), _gradeExecute(0)
{

}

AForm::AForm(std::string _name, int gradeSI, int gradeEX) : _Name(_name), _sign(0),  _gradeSign(gradeSI), _gradeExecute(gradeEX) {}

AForm::AForm(const AForm & copy) : _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute)
{
    *this = copy;
}

AForm &AForm:: operator=(const AForm & copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

AForm::~AForm()
{

}

std::string AForm::getName(void) const
{
    return this->_Name;
}

bool AForm::getSign(void) const
{
    return this->_sign;
}

int AForm::getGradeSign(void) const
{
    return this->_gradeSign;
}

int AForm::getGradeExecute(void) const
{
    return this->_gradeExecute;
}

bool AForm::beSigned(Bureaucrat bur)
{
    std::cout << "je rentre dans beSigned" << std::endl;
    if (this->_gradeSign >= bur.getGrade())
    {
        this->_sign = 1;
        return (1)
;    }
    else
        throw GradeTooLowExeption();
    return (0);
}

void AForm:: SignForm(Bureaucrat bur)
{
    if (this->_sign == 1)
        std::cout << bur.getName() << " signed " << this->getName() << std::endl;
    else
        std::cout << bur.getName() << " couldn't sign " << this->getName() << " because " << this->getGradeSign() << std::endl;
}

std::ostream & operator<<( std::ostream & o, AForm & nb)
{
	o << nb.getName() << " Bureaucrat gradeExecute " << nb.getGradeExecute() << " GradeSign" << nb.getGradeSign() << std::endl;
    return o;
}
