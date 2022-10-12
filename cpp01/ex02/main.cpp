/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string stringVAL = "HI THIS IS BRAIN";
	std::string * stringPTR = &stringVAL;
	std::string & stringREF = stringVAL;

	std::cout << "Adresse de str en mémoire: " << &stringVAL << std::endl;
	std::cout << "Adresse stockée dans stringPTR: " << stringPTR << std::endl;
	std::cout << "Adresse stockée dans stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "Valeur de stringVAL: " << stringVAL << std::endl;
	std::cout << "Valeur pointée par stringPTR: " << *stringPTR << std::endl;
	std::cout << "Valeur pointée par stringREF: " << stringREF << std::endl;

	return 0;	
}