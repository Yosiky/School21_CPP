#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class   Dog : public Animal
{
private:
    Brain   *brain;

public:
    Dog(void);
    Dog(const Dog &obj);
    ~Dog(void);

    Dog &operator=(const Dog &obj);
    
    virtual void    makeSound(void) const;
    void    setIdea(int num, const std::string &str);
    const std::string   &getIdea(int num) const;
};

#endif
