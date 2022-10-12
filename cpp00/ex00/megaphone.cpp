/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char up(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = 'A' - 'a' + c;
	}
	return c;
}

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (argv[i])
	{
		while (argv[i][j])
		{
			std::cout << up(argv[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	std::cout << std::endl;
	return 0;	
}
