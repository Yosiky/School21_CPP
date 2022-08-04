#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class ICharacter;

class AMateria
{
protected:
    std::string type;
public:
    AMateria(void);
    AMateria(std::string const & type);
    AMateria(const AMateria &obj);
    virtual ~AMateria(void);

    AMateria    &operator=(const AMateria &obj);

    std::string const   &getType() const; //Returns the materia type
    virtual AMateria*   clone() const = 0;
    virtual void        use(ICharacter& target);

};

#endif
