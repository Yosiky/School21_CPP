#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class   FragTrap : virtual public ClapTrap
{
protected:
    FragTrap(void);
    virtual const std::string   isName(void);

public:
    FragTrap(const FragTrap &obj);
    FragTrap(const std::string &_name);
    ~FragTrap(void);

    FragTrap    &operator=(const FragTrap &obj);

    void highFivesGuys(void);
};

#endif //FRAGTRAP_HPP
