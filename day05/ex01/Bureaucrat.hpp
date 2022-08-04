#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

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
    void    signForm(void);
};

std::ostream    &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif
