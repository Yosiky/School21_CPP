#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <iostream>

class   PresidentialPardonForm : public Form
{
    PresidentialPardonForm(void);
    PresidentialPardonForm(const PresidentialPardonForm &obj);

    PresidentialPardonForm  &operator=(const PresidentialPardonForm &obj);

public:
    PresidentialPardonForm(const std::string &target);
    ~PresidentialPardonForm(void);

    void    execute(const Bureaucrat &obj) const;
};

#endif
