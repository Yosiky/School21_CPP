#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class   WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal(void);
    WrongAnimal(const WrongAnimal &obj);
    virtual ~WrongAnimal(void);
    
    WrongAnimal  &operator=(const WrongAnimal &obj);

    void    makeSound(void) const;
    const std::string &getType(void) const;
};

#endif //WrongWRONGANIMAL_HPP
