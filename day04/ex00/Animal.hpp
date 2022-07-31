#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class   Animal
{
private:
    std::string type;

public:
    Animal(void);
    Animal(const Animal &obj);
    Animal(const std::string &_type);
    ~Animal(void);
    
    Animal  &operator=(const Animal &obj);

    virtual void    makeSound(void) const;
    
    std::string &getType(void);
}

#endif //ANIMAL_HPP
