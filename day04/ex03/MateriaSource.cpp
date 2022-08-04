#include "MateriaSource.hpp"

void    MateriaSource::setMateria(int idx, AMateria *m)
{
    array[idx] = m;
}

void    MateriaSource::setNullMateria(void)
{
    for (int i = 0; i < MAX_COUNT_ARRAY; ++i)
        array[i] = NULL;
}

int MateriaSource::findNullMateria()
{
    for (int i = 0; i < MAX_COUNT_ARRAY; ++i)
        if (array[i] == NULL)
            return i;
    return -1;
}

void    MateriaSource::deleteMateria(int idx)
{
    if (array[idx] != NULL)
        count--;
    delete array[idx];
    array[idx] = NULL;
}


MateriaSource::MateriaSource(void)
{
    std::cout << "MateriaSource constructor" << std::endl;
    count = 0;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    *this = obj;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < count; ++i)
        delete array[i];
    std::cout << "MateriaSource destructor" << std::endl;
}

MateriaSource   &MateriaSource::operator=(const MateriaSource &obj)
{
    std::cout << "MateriaSource was copied" << std::endl;
    count = obj.count;
    for (int i = 0; i < count; ++i)
    {
        deleteMateria(i);
        setMateria(i, obj.array[i]->clone());
    }
    return *this;
}    
                                                      
void        MateriaSource::learnMateria(AMateria *obj)
{
    if (count > 3)
    {
        std::cout << "MateriaSource is full" << std::endl;
        return ;
    } 
    std::cout << "MateriaSource was learned new materia" << std::endl;
    array[count++] = obj;
}

AMateria   *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < MAX_COUNT_ARRAY; ++i)
        if (type == array[i]->getType())
            return array[i]->clone();
    return NULL;
}
