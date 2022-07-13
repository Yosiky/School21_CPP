#include <iostream>
#include <string>
#include "PhoneBook.h"
#include "Contact.h"

int	main(void)
{
	//std::string	keyWord;
	//PhoneBook	book;
	Contact		people;

	std::cin >> people;
	std::cout << people.getFirstName() << std::endl;
	/*
	while (1)
	{
		std::cin >> kyeWord;
		if (keyWord == "ADD")
		{
			std::cin >> people;
			book += people;
		}
		else if (keyWord == "SEARCH")
			std::cout << book;
		else if (keyWord == "EXIT")
			break ;
	}
	*/
	return (0);
}
