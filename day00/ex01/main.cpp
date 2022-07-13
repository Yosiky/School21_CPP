#include <iostream>
#include <string>
#include "PhoneBook.h"
#include "Contact.h"

int	main(void)
{
	std::string	keyWord;
	PhoneBook	book;
	Contact		people;

	while (1)
	{
		std::cin >> keyWord;
		if (keyWord == "ADD")
		{
			std::cin >> people;
			book.add(people);
		}
		else if (keyWord == "SEARCH")
			book.list();
		else if (keyWord == "EXIT")
			break ;
	}
	return (0);
}
