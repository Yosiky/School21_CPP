#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class   ScavTrap : public ClapTrap
{
protected:
    ScavTrap(void);
    virtual const std::string   isName(void);

public:
    ScavTrap(const ScavTrap &obj);
    ScavTrap(const std::string &_name);
    ~ScavTrap(void);

    ScavTrap    &operator=(const ScavTrap &obj);
    
    void    guardGate(void);
};

#endif //SCAVTRAP_HPP
