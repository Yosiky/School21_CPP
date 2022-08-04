#include "Bureaucrat.hpp"

const char  *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade equal 1";
}

const char  *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade equal 150";
}


Bureaucrat::Bureaucrat(void)
{
    std::cout << "Bureaucrat was created" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &str, int grd)
: name(str), grade(grd)
{
    int res = (grade < 1) + (grade > 150) * 2;

    if (res)
        grade = 150;
    if (res & 0x1)
        throw Bureaucrat::GradeTooHighException();
    else if (res & 0x2)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Bureaucrat was created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
:name(obj.name), grade(obj.grade)
{
    std::cout << "Bureaucrat was copied" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat was destroied" << std::endl;
}
                                               
Bureaucrat  &Bureaucrat::operator=(__attribute__((unused))const Bureaucrat &obj)
{
    std::cout << "Bureaucrat operator=" << std::endl;
    return *this;
}
                                               
const std::string   &Bureaucrat::getName(void) const
{
    return name;
}

int Bureaucrat::getGrade(void) const
{
    return grade;
}
                                               
void    Bureaucrat::upGrade(void)
{
    if (grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        --grade;
}

void    Bureaucrat::downGrade(void)
{
    if (grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        ++grade;
}

std::ostream    &operator<<(std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName() + ", bureaucrat grade " << obj.getGrade();
    return out;
}
