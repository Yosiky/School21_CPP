#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>

class   WrongCat : public WrongAnimal
{
public:
    WrongCat(void);
    WrongCat(const WrongCat &obj);
    ~WrongCat(void);

    virtual void    makeSound(void) const;
    WrongCat &operator=(const WrongCat &obj);
};

#endif //WrongWRONGCAT_HPP
