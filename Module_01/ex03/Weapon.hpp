/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:35:02 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/28 03:21:08 by dmorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class Weapon {
	private:
			std::string type;
	public:
			Weapon();
			Weapon(std::string type);
			~Weapon();
			const std::string&	getType(void) const;
			void				setType(std::string type);
};

#endif