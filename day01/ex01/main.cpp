#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie	a("Jenya");
	Zombie	b;
	b = Zombie("Angelo");
	Zombie	c(a);
	Zombie *arr = zombieHorde(10, "Vitya");

	for (int i = 0; i < 10; ++i)
		arr[i].announce();
	delete[] arr;
	return (0);
}
