#ifndef SHUBBERYCREATIONFORM_HPP
# define SHUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>
# include <string>
# include <iostream>

class   ShrubberyCreationForm : public Form
{
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(const ShrubberyCreationForm &obj);

    ShrubberyCreationForm   &operator=(const ShrubberyCreationForm &obj);

public:
    ShrubberyCreationForm(const std::string &target);
    ~ShrubberyCreationForm(void);

    void    execute(const Bureaucrat &obj) const;
};

#endif
