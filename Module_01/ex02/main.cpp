/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:24:43 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/28 01:30:48 by dmorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string &stringREF = string;
	stringPTR = &string;

	std::cout << "Address of string = " << &string << std::endl;
	std::cout << "Address of pointer = " << stringPTR << std::endl;
	std::cout << "Address of reference = " << &stringREF << std::endl;
	std::cout << "Value of string = " << string << std::endl;
	std::cout << "Value of pointer = " << *stringPTR << std::endl;
	std::cout << "Value of reference = " << stringREF << std::endl;

	
}