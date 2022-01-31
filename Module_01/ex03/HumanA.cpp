/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 02:13:27 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/28 03:41:45 by dmorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {
	std::cout << "\x1b[32m" << name << ": I am ALPHA HUMAN" << "\x1b[39;49m"
			<< std::endl;
}

HumanA::~HumanA() {
	std::cout << "\x1b[31m" << name << ": I am dead" << "\x1b[39;49m"
			<< std::endl;
}

void	HumanA::attack() {
	std::cout << "\x1b[33m" << name << " attacks with their " 
			<< weapon.getType() << "\x1b[39;49m"
			<< std::endl;
}
