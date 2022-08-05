#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class   Form;

class   Bureaucrat
{
    const std::string   name;
    int                 grade;

    Bureaucrat(void);
    Bureaucrat  &operator=(const Bureaucrat &obj);
    
    class   GradeTooHighException : public std::exception
    {
        virtual const char* what() const throw();
    };

    class   GradeTooLowException : public std::exception
    {
        virtual const char* what() const throw();
    };

public:
    Bureaucrat(const std::string &str, int grd);
    Bureaucrat(const Bureaucrat &obj);
    ~Bureaucrat(void);

    const std::string   &getName(void) const;
    int getGrade(void) const;

    void    upGrade(void);
    void    downGrade(void);
    void    signForm(Form &form) const;
    void    executeForm(const Form &form);
};

std::ostream    &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif
