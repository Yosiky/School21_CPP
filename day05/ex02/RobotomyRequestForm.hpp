#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <cstdlib>
# include <ctime>

class   RobotomyRequestForm : public Form
{
    RobotomyRequestForm(void);
    RobotomyRequestForm(const RobotomyRequestForm &obj);
    
    RobotomyRequestForm  &operator=(const RobotomyRequestForm &obj);

public:
    RobotomyRequestForm(const std::string &target);
    ~RobotomyRequestForm(void);

    void    execute(const Bureaucrat &obj) const;
};

#endif
