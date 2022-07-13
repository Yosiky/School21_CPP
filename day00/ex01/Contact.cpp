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

void	getFirstName(void) const
{
	return (firstName);
}

void	getLastName(void) const
{
	return (lastName);
}

void	getNickName(void) const
{
	return (nickname);
}

void	getPhoneNumber(void) const
{
	return (phoneNumber);
}

istream &operator>>(istream &in, Contact &value)
{
	value.init();
	return (in);
}
