#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <iostream>

class   Intern
{
private:
    Intern(const Intern &obj);
    
    Intern  &operator=(const Intern &obj);

    unsigned char   hash(const std::string &str);

public:
    Intern(void);
    ~Intern(void);

    Form    *makeForm(const std::string &form, const std::string &nameForm);
};


#endif
