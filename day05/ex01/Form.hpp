#ifndef FORM_HPP
# define FORM_HPP

# include <exception>
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class   Form
{
private:
    class   GradeTooHighException : public std::exception
    {
        virtual const char  *what(void) const throw();
    };

    class   GradeTooLowException : public std::exception
    {
        virtual const char  *what(void) const throw();
    };

    const std::string   name;
    bool                sign;
    const int           gradeSign;
    const int           gradeExec;

    Form(void);
    Form    &operator=(const Form &obj);

public:
    Form(const std::string &str, int grdSign, int grdExec);
    Form(const Form &obj);
    ~Form(void);

    void    beSigned(const Bureaucrat &obj);
}

#endif
