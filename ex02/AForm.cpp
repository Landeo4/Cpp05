#include "AForm.hpp"

AForm::AForm(void): _Name("not attribute"), _sign(0),  _gradeSign(0), _gradeExecute(0) {}

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

std::string AForm::getName(void)
{
    return this->_Name;
}

bool AForm::getSign(void)
{
    return this->_sign;
}

int AForm::getGradeSign(void)
{
    return this->_gradeSign;
}

int AForm::getGradeExecute(void)
{
    return this->_gradeExecute;
}

void AForm::beSigned(Bureaucrat bur)
{
    if (this->_gradeSign >= bur.getGrade())
    {
        this->_sign = 1;
    }
    else
        throw GradeTooLowExeption();
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
