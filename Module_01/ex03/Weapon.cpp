/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:38:30 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/28 03:45:37 by dmorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
} 

Weapon::Weapon(std::string type) 
{
	this->type = type;
}

Weapon::~Weapon() {
	std::cout << "\x1b[36m" << this->type
		<< " is broken" << "\x1b[39;49m" 
		<< std::endl;
}

const	std::string& Weapon::getType(void) const
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}