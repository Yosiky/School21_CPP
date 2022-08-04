#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# define MAX_COUNT_INVENTORY 4

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>
# include <string>

class Character : public ICharacter
{
private:
    std::string name;
    AMateria    *array[MAX_COUNT_INVENTORY];

    void    setMateria(int idx, AMateria *m);
    void    setNullMateria(void);
    int     findNullMateria(void);
    void    deleteMateria(int idx);
    Character(const Character &obj);
    Character   &operator=(const Character &obj);

public:
    Character(void);
    Character(const std::string &str);
    ~Character(void);

    std::string const   &getName() const;
    void    equip(AMateria* m);
    void    unequip(int idx);
    void    use(int idx, ICharacter& target);

};

#endif
