#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

# define INPUT_DATA(msg, value) \
	std::cout << msg;			\
	std::cin >> value;			

class Contact
{
public:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	Contact();
	Contact(const Contact &value);
	~Contact();

	Contact	&operator=(const Contact &value);
	
};

std::istream &operator>>(std::istream &in, Contact &value);
std::ostream &operator<<(std::ostream &out, const Contact &value);

#endif
