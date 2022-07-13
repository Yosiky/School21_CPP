#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>

# define INPUT_DATA(msg, value) \
	std::cout << msg;			\
	std::cin >> value;			

class Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;
public:
	Contact();
	~Contact();

	void		init(void);
	std::string	&getFirstName(void);
	std::string	&getLastName(void);
	std::string	&getNickName(void);
	std::string	&getPhoneNumber(void);
};

std::istream &operator>>(std::istream &in, Contact &value);

#endif
