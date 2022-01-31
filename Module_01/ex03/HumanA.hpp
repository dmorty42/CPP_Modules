/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 02:07:51 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/28 03:35:45 by dmorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA {
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void	attack();
	private:
		std::string	name;
		Weapon& weapon;
};

#endif