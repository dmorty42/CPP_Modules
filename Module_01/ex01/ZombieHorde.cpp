/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 00:30:22 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/28 00:44:29 by dmorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie* horde = new Zombie[N];
	int	i = 0;

	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return (horde);
}
