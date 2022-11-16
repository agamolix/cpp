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

#include "ClapTrap.h"

int main (void) {

	ClapTrap Diana ("Princess Diana");
	ClapTrap Charles ("King Charles");

	std::cout << std::endl;
	Diana.attack("King Charles");
	std::cout << std::endl;
	Charles.takeDamage(5);
	std::cout << std::endl;
	Charles.beRepaired(3);
	std::cout << std::endl;

	return 0;
}
