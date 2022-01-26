
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