#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
: Form("PresidentialPardonForm", target, 25, 5)
{
    std::cout << "PresidentialPardonForm was created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm was destroied" << std::endl;
}

void    PresidentialPardonForm::execute(const Bureaucrat &obj) const
{
    if (getSign())
    {
        if (obj.getGrade() > getGradeExec())
            throw GradeTooLowException(obj.getName() + " have low grade for execute this form");
    }
    else
        throw SignException();
    std::cout << getTarget() + " was pardoned by Zaphod Beeblebrox" << std::endl;
}
