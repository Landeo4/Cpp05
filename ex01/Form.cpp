#include "Form.hpp"

Form::Form(std::string _name, int gradeSI, int gradeEX) : _Name(_name), _sign(0),  _gradeSign(gradeSI), _gradeExecute(gradeEX) {}

Form::Form(const Form & copy) : _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute)
{
    *this = copy;
}

Form &Form:: operator=(const Form & copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

Form::~Form()
{

}

std::string Form::getName(void)
{
    return this->_Name;
}

bool Form::getSign(void)
{
    return this->_sign;
}

int Form::getGradeSign(void)
{
    return this->_gradeSign;
}

int Form::getGradeExecute(void)
{
    return this->_gradeExecute;
}

void Form::beSigned(Bureaucrat bur)
{
    if (this->_gradeSign >= bur.getGrade())
    {
        this->_sign = 1;
    }
    else
        throw GradeTooLowExeption();
}

void Form:: SignForm(Bureaucrat bur)
{
    if (this->_sign == 1)
        std::cout << bur.getName() << " signed " << this->getName() << std::endl;
    else
        std::cout << bur.getName() << " couldn't sign " << this->getName() << " because " << this->getGradeSign() << std::endl;
}

std::ostream & operator<<( std::ostream & o, Form & nb)
{
	o << nb.getName() << " Bureaucrat gradeExecute " << nb.getGradeExecute() << " GradeSign " << nb.getGradeSign() << std::endl;
    return o;
}
