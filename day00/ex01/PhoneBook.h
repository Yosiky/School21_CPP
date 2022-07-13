#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.h"
# include <iostream>
# include <iomanip>
# include <stdint.h>

# define PHONEBOOK_SIZE 8

class PhoneBook
{
private:
	Contact	array[PHONEBOOK_SIZE];
	int32_t	l;
	int32_t	r;
public:
	PhoneBook();
	~PhoneBook();

	void	add(const Contact &value);
	void	list(void) const;
	//void	search(const Contact &value) const;
};

std::ostream &operator<<(std::ostream &out, PhoneBook &value);

#endif
