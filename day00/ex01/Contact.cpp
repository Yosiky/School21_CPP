#include "Contact.hpp"

Contact::Contact()
{ }

Contact::Contact(const Contact &value)
{
	*this = value;
}

Contact::~Contact()
{ }

Contact	&Contact::operator=(const Contact &value)
{
	firstName = value.firstName;
	lastName = value.lastName;
	nickname = value.nickname;
	phoneNumber = value.phoneNumber;
	darkestSecret = value.darkestSecret;
	return (*this);
}

static void	outputMsgAndWaitInput(std::istream &in, const std::string &str, std::string &value)
{
	std::cout << str;
	in >> value;
}

std::istream &operator>>(std::istream &in, Contact &value)
{
	outputMsgAndWaitInput(in, "First name:\n", value.firstName);
	outputMsgAndWaitInput(in, "Last name:\n", value.lastName);
	outputMsgAndWaitInput(in, "Nickname:\n", value.nickname);
	outputMsgAndWaitInput(in, "Phone number:\n", value.phoneNumber);
	outputMsgAndWaitInput(in, "Secret:\n", value.darkestSecret);
	return (in);
}

std::ostream &operator<<(std::ostream &out, const Contact &value)
{
	out << "First name: " << value.firstName << std::endl
		<< "Last name: " << value.lastName << std::endl
		<< "Nickname: " << value.nickname << std::endl
		<< "Phone number: " << value.phoneNumber << std::endl
		<< "Secret: " << value.darkestSecret << std::endl;
	return (out);
}
