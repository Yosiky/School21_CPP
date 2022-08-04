#include "Character.hpp"

void    Character::setMateria(int idx, AMateria *m)
{
    array[idx] = m;
}

void    Character::setNullMateria(void)
{
    for (int i = 0; i < MAX_COUNT_INVENTORY; ++i)
        array[i] = NULL;
}

int Character::findNullMateria()
{
    for (int i = 0; i < MAX_COUNT_INVENTORY; ++i)
        if (array[i] == NULL)
            return i;
    return -1;
}

void    Character::deleteMateria(int idx)
{
    delete array[idx];
    array[idx] = NULL;
}

Character::Character(void)
{
    std::cout << "Character constructor" << std::endl;
    setNullMateria();
}

Character::Character(const std::string &name)
{
    std::cout << "Character constructor(" + name + ")" << std::endl;
    this->name = name;
    setNullMateria();
}

Character::Character(const Character &obj)
{
    *this = obj;
}

Character::~Character(void)
{
    std::cout << "Character destructor" << std::endl;
    for (int i = 0; i < MAX_COUNT_INVENTORY; ++i)
        deleteMateria(i);
}

Character   &Character::operator=(const Character &obj)
{
    std::cout << "Character was copied" << std::endl;
    name = obj.name;
    for (int i = 0; i < MAX_COUNT_INVENTORY; ++i)
    {
        deleteMateria(i);
        setMateria(i, obj.array[i]->clone());
    }
    return *this;
}
                                              
std::string const   &Character::getName() const
{
    return name;
}

void    Character::equip(AMateria* m)
{
    if (findNullMateria() == -1)
        std::cout << "Character inventory is full" << std::endl;
    else
    {
        std::cout << "Character was equiped new materia" << std::endl;
        setMateria(findNullMateria(), m);
    }
}

void    Character::unequip(int idx)
{
    if (idx < 0 || idx >= MAX_COUNT_INVENTORY)
        std::cout << "Character not valid index" << std::endl;
    else
        setMateria(idx, NULL);
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= MAX_COUNT_INVENTORY)
        std::cout << "Character not valid index" << std::endl;
    else if (array[idx] == NULL)
        std::cout << "Character not materia" << std::endl;
    else
        array[idx]->use(target);
}
