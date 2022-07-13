#include "Contact.h"

Contact::Contact()
{ }

Contact::~Contact()
{ }

void	Contact::init(void)
{
	INPUT_DATA("First name: ", firstName);
	INPUT_DATA("Last name: ", lastName);
	INPUT_DATA("Nickname: ", nickname);
	INPUT_DATA("Phone number: ", phoneNumber);
	INPUT_DATA("Secret: ", darkestSecret);
}

std::string	&Contact::getFirstName(void)
{
	return (firstName);
}

std::string	&Contact::getLastName(void)
{
	return (lastName);
}

std::string	&Contact::getNickName(void)
{
	return (nickname);
}

std::string	&Contact::getPhoneNumber(void)
{
	return (phoneNumber);
}

std::istream &operator>>(std::istream &in, Contact &value)
{
	value.init();
	return (in);
}
