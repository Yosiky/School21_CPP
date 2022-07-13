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

	void	init(void);
	void	getFirstName(void) const;
	void	getLastName(void) const;
	void	getNickName(void) const;
	void	getPhoneNumber(void) const;
};

istream &operator>>(istream &in, Contact &value);

#endif
