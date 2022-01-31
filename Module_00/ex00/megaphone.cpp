/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 20:20:21 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/27 20:20:24 by dmorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc > 1)
	{
		while (argv[++i])
		{
			j = -1;
			while(argv[i][++j])
			{
				std::cout << (char)toupper(argv[i][j]);
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}