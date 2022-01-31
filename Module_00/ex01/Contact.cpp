/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 20:20:29 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/27 20:20:31 by dmorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	write_info(std::string str)
{
	std::string temp;

	std::cout << str;
	std::getline(std::cin, temp);
	while (temp.empty())
	{
		std::cout << "Please re-enter: ";
		std::getline(std::cin, temp);
	}
	return (temp);
}

void	Contact::add_contact()
{
	first_name = write_info("Enter first name: ");
	last_name = write_info("Enter last name: ");
	nick_name = write_info("Enter nickname: ");
	number = write_info("Enter phone number: ");
	secret = write_info("Enter darkest secret: ");
}

void Contact::get()
{
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nick_name << std::endl;
	std::cout << "Phone number: " << number << std::endl;
	std::cout << "Darkest secret: " << secret << std::endl;
}