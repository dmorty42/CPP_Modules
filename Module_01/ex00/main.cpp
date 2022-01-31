/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:49:35 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/28 00:02:47 by dmorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *one = newZombie("Jack");
	Zombie two("Marry");

	one->announce();
	two.announce();
	delete(one);
	randomChump("Johnie");
}