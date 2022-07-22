#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>


class   HumanA
{
private:
    Weapon      &weapon;
    std::string name;
public:
    HumanA(const std::string &_name, Weapon &_weapon);

    void    attack(void);
};

#endif
