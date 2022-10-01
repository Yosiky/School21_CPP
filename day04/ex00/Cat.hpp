#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class   Cat : public Animal
{
public:
    Cat(void);
    Cat(const Cat &obj);
    ~Cat(void);

    virtual void    makeSound(void) const;
    Cat &operator=(const Cat &obj);
};

#endif //CAT_HPP
