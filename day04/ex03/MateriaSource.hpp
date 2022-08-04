#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include <iostream>

# define MAX_COUNT_ARRAY 4

class   MateriaSource : public IMateriaSource
{
private:
    AMateria    *array[4];
    int         count;

    void    deleteMateria(int idx);
    void    setMateria(int idx, AMateria *m);
    void    setNullMateria(void);
    int     findNullMateria(void);

public:
    MateriaSource(void);
    MateriaSource(const MateriaSource &obj);
    ~MateriaSource(void);

    MateriaSource   &operator=(const MateriaSource &obj);

    void        learnMateria(AMateria *obj);
    AMateria    *createMateria(std::string const &type);
};

#endif
