/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 20:20:38 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/27 23:34:35 by dmorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	main()
{
	PhoneBook	one;
	int			i;
	std::string cmd;

	i = 0;
	while (1)
	{
		std::cout << "Please enter your command: ";
		std::getline(std::cin, cmd);
		if (cmd.empty())
			break ;
		if (!cmd.compare("ADD"))
		{
			one.contact[i].add_contact();
			i++;
		}
		else if (!cmd.compare("SEARCH"))
			search_contact(one);
		else if (!cmd.compare("EXIT"))
			break ;
		if (i == 8)
			i = 0;
	}
}