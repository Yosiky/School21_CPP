#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>


class   HumanB
{
private:
    Weapon      *weapon;
    std::string name;

    HumanB(void);
    HumanB(const HumanB &obj);
    HumanB  &operator=(const HumanB &obj);
public:
    HumanB(const std::string &_name);
    ~HumanB(void);

    void    attack(void);
    void    setWeapon(Weapon &_weapon);
};

#endif
