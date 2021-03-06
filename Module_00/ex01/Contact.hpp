/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 20:20:33 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/27 20:20:36 by dmorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact {
	public:
			std::string	first_name;
			std::string	last_name;
			std::string	nick_name;
			std::string	number;
			std::string	secret;
			void	add_contact();
			void	get();
};

#endif