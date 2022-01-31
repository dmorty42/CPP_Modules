/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 02:27:34 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/28 04:07:01 by dmorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
	std::cout << "\x1b[34m" << name << ": I am BETTA HUMAN" << "\x1b[39;49m"
			<< std::endl;
}

HumanB::~HumanB() {
	std::cout << "\x1b[35m" << name << ": I am dead" << "\x1b[39;49m"
			<< std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
	std::cout << "\x1b[37m" << name << ": I got my "
			<< this->weapon->getType() << "\x1b[39;49m"
			<< std::endl;
}

bool HumanB::hasWeapon() {
	if (!this->weapon)
		return (false);
	return (true);
}

void	HumanB::attack() {
	if (hasWeapon())
		std::cout << "\x1b[36m" << name << " attacks with their " 
				<< this->weapon->getType() << "\x1b[39;49m"
				<< std::endl;
	else 
		std::cout << "\x1b[36m" << name << " hasn't weapon for attack" 
				 << "\x1b[39;49m" << std::endl;
}
