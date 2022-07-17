#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie	a("Jenya");
	Zombie	*b = newZombie("Lesha");
	randomChump("Kostya");
	b->announce();
	a.announce();
	delete b;
	return (0);
}
