/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 22:31:45 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/28 00:11:29 by dmorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << this->name << "\x1b[33m" << ": " 
		<< "BraiiiiiiinnnzzzZ..." << "\x1b[39;49m"
		<< std::endl;
}

Zombie::Zombie(std::string new_name)
{
	name = new_name;
	std::cout << this->name << "\x1b[31m" << ": "
		<< "Hello sweaty world!" << "\x1b[39;49m"
		<< std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << ": " << "\x1b[35m"
		<< "Bye bye cruel world!" << "\x1b[39;49m"
		<< std::endl;
}