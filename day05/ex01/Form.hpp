#ifndef FORM_HPP
# define FORM_HPP

# include <exception>
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class   Bureaucrat;

class   Form
{
private:
    class   GradeTooLowException : public std::exception
    {
        const std::string   str;
    public:
        GradeTooLowException(const std::string &nStr);
        virtual const char  *what(void) const throw();
        ~GradeTooLowException(void) throw();
    };

    class   GradeTooHighException : public std::exception
    {
        const std::string   str;
    public:
        GradeTooHighException(const std::string &nStr);
        virtual const char  *what(void) const throw();
        ~GradeTooHighException(void) throw();
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

    void                beSigned(const Bureaucrat &obj);
    const std::string   &getName(void) const;
    bool                getSign(void) const;
};

#endif
