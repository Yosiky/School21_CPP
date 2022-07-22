#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	Zombie(const std::string &_name);
	Zombie(const Zombie &vlaue);

	~Zombie(void);
	Zombie	&operator=(const Zombie &value);

	void	announce(void) const;
	void	setName(const std::string &value);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
