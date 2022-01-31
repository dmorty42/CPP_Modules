/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 22:11:28 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/28 00:45:41 by dmorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	public:
		void announce(void);
		Zombie(std::string new_name);
		Zombie();
		~Zombie();
		void setName(std::string new_name);
	private:
		std::string name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif