/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 22:11:28 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/27 22:52:37 by dmorty           ###   ########.fr       */
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
		~Zombie();
	private:
		std::string name;
};

void randomChump( std::string name );
Zombie* newZombie(std::string name);

#endif