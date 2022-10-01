#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class   Cat : public Animal
{
private:
    Brain   *brain;

public:
    Cat(void);
    Cat(const Cat &obj);
    ~Cat(void);

    Cat &operator=(const Cat &obj);

    virtual void    makeSound(void) const;
    void    setIdea(int num, const std::string &str);
    const std::string   &getIdea(int num) const;
};

#endif //CAT_HPP
