#include "Zombie.hpp"

Zombie::Zombie(const std::string &_name)
:name(_name)
{ }

Zombie::~Zombie(void)
{
	std::cout << name << ": destroy" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
