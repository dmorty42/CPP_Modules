
#include "PhoneBook.hpp"

void	put_little_str(std::string str, int flag)
{
	if (str.length() > 10)
			std::cout << str.substr(0, 9) << ".";
	else
			std::cout << str;
	if (flag)
		std::cout << "|";
	else
		std::cout << std::endl;
}

void PhoneBook::preview()
{
	int	i;

	i = 0;
	while (i < 8)
	{
		std::cout << i + 1 << "|";
		put_little_str(contact[i].first_name, 1);
		put_little_str(contact[i].last_name, 1);
		put_little_str(contact[i].nick_name, 1);
		put_little_str(contact[i].number, 1);
		put_little_str(contact[i].secret, 0);
		i++;
	}
}