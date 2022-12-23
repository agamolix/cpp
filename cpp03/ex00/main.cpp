/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/12/08 13:24:32 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main (void) {

	ClapTrap Diana ("Princess Diana");
	std::cout << "-------------------------------------------" << std::endl;
	ClapTrap Charles ("King Charles");
	std::cout << "-------------------------------------------" << std::endl;
	Diana.attack("King Charles");
	std::cout << "-------------------------------------------" << std::endl;
	Charles.takeDamage(5);
	std::cout << "-------------------------------------------" << std::endl;
	Charles.beRepaired(3);
	std::cout << "-------------------------------------------" << std::endl;

	return 0;
}
