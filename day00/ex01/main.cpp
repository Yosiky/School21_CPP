#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include "PhoneBook.hpp"
#include "Contact.hpp"





int	main(void)
{
	std::stringstream	line;
	std::string	keyWord;
	PhoneBook	book;
	Contact		people;
	int32_t		number;

	while (1)
	{
		try
		{
			std::cin >> keyWord;
			if (keyWord == "ADD")
			{
				std::cin >> people;
				book.add(people);
			}
			else if (keyWord == "SEARCH")
			{
				std::cout << book;
				std::cout << "Input index people: ";
				std::cin.ignore();
				std::getline(std::cin, keyWord);
				line << keyWord;
				line >> number;
				if (line.fail())
					throw std::runtime_error("Invalid line");
				std::cout << book[number];
			}
			else if (keyWord == "EXIT")
				break ;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		line.ignore();
	}
	return (0);
}
