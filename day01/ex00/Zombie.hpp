#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string	name;

	Zombie();
	Zombie(const Zombie &vlaue);
public:
	Zombie(const std::string &_name);
	~Zombie(void);
	Zombie	&operator=(const Zombie &value);

	void	announce(void) const;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
