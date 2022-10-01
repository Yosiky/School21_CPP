#ifndef FORM_HPP
# define FORM_HPP

# include <exception>
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class   Bureaucrat;

class   Form
{
protected:
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

    class   SignException : public std::exception
    {
    public:
        virtual const char  *what(void) const throw();
    };

    class   ExecuteException : public std::exception
    {
        const std::string   str;
    public:
        ExecuteException(const std::string &nStr);
        virtual const char  *what(void) const throw();
        ~ExecuteException(void) throw();
    };

    Form(const std::string &str, const std::string &tar, int grdSign, int grdExec);

private:
    const std::string   name;
    const std::string   target;
    bool                sign;
    const int           gradeSign;
    const int           gradeExec;

    Form(void);
    Form    &operator=(const Form &obj);

public:
    Form(const std::string &str, int grdSign, int grdExec);
    Form(const Form &obj);
    virtual ~Form(void);

    virtual void        execute(const Bureaucrat &obj) const = 0;
    void                beSigned(const Bureaucrat &obj);
    const std::string   &getName(void) const;
    const std::string   &getTarget(void) const;
    bool                getSign(void) const;
    int                 getGradeSign(void) const;
    int                 getGradeExec(void) const;
};

#endif
