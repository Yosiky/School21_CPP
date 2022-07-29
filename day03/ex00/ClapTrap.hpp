#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class   ClapTrap
{
private:
    std::string name;
    int         hitPoint;
    int         energy;
    int         damage;

public:
    ClapTrap(const ClapTrap &obj);
    ClapTrap(const std::string &_name);
    ~ClapTrap(void);

    ClapTrap    &operator=(const ClapTrap &obj);
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif //CLAPTRAP_HPP
