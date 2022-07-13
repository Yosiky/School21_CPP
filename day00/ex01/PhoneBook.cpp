#include "PhoneBook.h"

PhoneBook::PhoneBook()
: l(0), r(0)
{ }

PhoneBook::~PhoneBook()
{ }

void	PhoneBook::add(const Contact &value)
{
	if (r < 8)
	{
		array[l + r] = value;
		++r;
	}
	else 
	{
		l = (l + 1) % PHONEBOOK_SIZE;
		array[(l + r) % PHONEBOOK_SIZE] = value;
	}
}

void	PhoneBook::list(void) const
{
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << std::setw(10) << std::setiosflags(std::ios_base::right);
	for (int i = 0; i < r; ++i)
	{
		std::cout << '|' << i << '|' << std::endl;
	}
}

void	PhoneBook::search(const Contact &value) const
{
	
}

PhoneBook	PhoneBook::&operator+=(Contact &value)
{
	
}
