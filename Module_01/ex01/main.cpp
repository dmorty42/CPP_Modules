/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 00:44:32 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/28 00:52:42 by dmorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* horde = zombieHorde(5, "Heap of meat");

	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] (horde);
}