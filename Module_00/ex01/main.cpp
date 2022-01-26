
#include "PhoneBook.hpp"

void search_contact(PhoneBook one)
{
	int	i;

	one.preview();
	std::cout << "Please choose number of contact: ";
	std::cin >> i;
	while (i < 1 || i > 8)
	{
		std::cout << "Incorect number! Please re-enter: ";
		std::cin >> i;
	}
	one.contact[i - 1].get();
}

int	main(int argc, char **argv)
{
	PhoneBook	one;
	int			i;
	std::string cmd;

	i = 0;
	while (1)
	{
		std::cout << "Please enter your command: ";
		std::cin >> cmd;
		if (!cmd.compare("ADD"))
		{
			one.contact[i].add_contact();
			i++;
		}
		else if (!cmd.compare("SEARCH"))
			search_contact(one);
		else if (!cmd.compare("EXIT"))
			break ;
		else
			continue ;
		if (i == 9)
			i = 8;
	}
}