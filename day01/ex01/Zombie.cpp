#include "Zombie.hpp"

Zombie::Zombie()
{ }

Zombie::Zombie(const std::string &_name)
:name(_name)
{ }

Zombie::Zombie(const Zombie &value)
{
	*this = value;
}

Zombie::~Zombie(void)
{
	std::cout << name << ": destroy" << std::endl;
}

Zombie	&Zombie::operator=(const Zombie& value)
{
	name = value.name;
	return *this;
}

void Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(const std::string &value)
{
	name = value;
}
