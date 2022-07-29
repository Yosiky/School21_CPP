#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>
# include <string>

class   DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;

protected:
    DiamondTrap(void);
    virtual const std::string   isName(void);

public:
    DiamondTrap(const DiamondTrap &obj);
    DiamondTrap(const std::string &_name);
    ~DiamondTrap(void);

    DiamondTrap &operator=(const DiamondTrap &obj);
        
    

};

#endif //DIAMONDTRAP_HPP
