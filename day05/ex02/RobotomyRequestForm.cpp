#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: Form("RobotomyRequestForm", target, 72, 45)
{
    srand(static_cast<unsigned int>(time(0)));
    std::cout << "RobotomyRequestForm was created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm was destroied" << std::endl;
}
                                                               
void    RobotomyRequestForm::execute(const Bureaucrat &obj) const
{
    if (getSign())
    {
        if (obj.getGrade() > getGradeExec())
            throw GradeTooLowException(obj.getName() + " have low grade for execute this form");
    }
    else
        throw SignException();
    int shance = rand() % 101;
    
    std::cout << "* drilling noises *" << std::endl;
    if (shance < 50)
        std::cout << "Robotomy failed" << std::endl;
    else
        std::cout << "Robotomy successes" << std::endl;
}
