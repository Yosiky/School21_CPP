#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class   Animal
{
protected:
    std::string type;

public:
    Animal(void);
    Animal(const Animal &obj);
    virtual ~Animal(void);
    
    Animal  &operator=(const Animal &obj);

    virtual void    makeSound(void) const;
    const std::string &getType(void) const;
};

#endif //ANIMAL_HPP
