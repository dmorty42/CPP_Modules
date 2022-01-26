
#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include "Contact.hpp"

class	PhoneBook {
	public:
			Contact contact[8];
			void	preview();
};

#endif