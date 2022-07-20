#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*arr = new[N] Zombie(name);

	return arr;
}
