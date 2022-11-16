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
#include "ScavTrap.h"

int main (void) {

	ClapTrap Charles ("King Charles");
	ScavTrap Harry ("Prince Harry");
	std::cout << std::endl;

	Charles.attack("Prince Harry");
	Harry.takeDamage(0);
	std::cout << std::endl;

	Harry.attack("King Charles");
	Charles.takeDamage(20);
	std::cout << std::endl;

	Harry.guardGate();
	std::cout << std::endl;

	return 0;
}
