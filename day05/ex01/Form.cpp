#include "Form.hpp"

Form::GradeTooLowException::GradeTooLowException(const std::string &nStr)
: str(nStr)
{ }

const char  *Form::GradeTooLowException::what(void) const throw()
{
    return str.c_str();
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{ }

Form::GradeTooHighException::GradeTooHighException(const std::string &nStr)
: str(nStr)
{ }

const char  *Form::GradeTooHighException::what(void) const throw()
{
    return str.c_str();
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{ }


Form::Form(const std::string &str, int grdSign, int grdExec)
: name(str), gradeSign(grdSign), gradeExec(grdExec)
{
    int check = (gradeSign < 1 || gradeExec < 1) + (gradeSign > 150 || gradeExec > 150) * 2;
    
    if (check & 0x1)
        throw Form::GradeTooHighException("Max grade equal 1");
    else if (check & 0x2)
        throw Form::GradeTooLowException("Min grade equal 150");
    std::cout << "Form was created (" + name + ")" << std::endl;
    sign = false;
}

Form::Form(const Form &obj)
: name(obj.name),  gradeSign(obj.gradeSign), gradeExec(obj.gradeExec)
{
    std::cout << "Form was copied" << std::endl;
    sign = obj.sign;
}

Form::~Form(void)
{
    std::cout << "Form was destroied" << std::endl;
}
                                                        
void    Form::beSigned(const Bureaucrat &obj)
{
    if (obj.getGrade() > gradeSign)
        throw Form::GradeTooLowException(obj.getName() + " couldn't sign " + name);
    sign = true;
}

const std::string   &Form::getName(void) const
{
    return name;
}

bool    Form::getSign(void) const
{
    return sign;
}
