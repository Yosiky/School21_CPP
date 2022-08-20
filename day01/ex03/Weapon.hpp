#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class   Weapon
{
private:
    std::string type;
    Weapon(void);
public:
    Weapon(const std::string &value);
    Weapon(const Weapon &obj);
    ~Weapon(void);
    Weapon  &operator=(const Weapon &obj);

    const std::string   &getType(void) const;
    void                setType(const std::string &_type);
};

#endif
