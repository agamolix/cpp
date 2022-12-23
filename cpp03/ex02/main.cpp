/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/12/08 13:29:44 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int main (void) {

	ClapTrap Charles ("King Charles");
	std::cout << "-------------------------------------------" << std::endl;
	ScavTrap Harry ("Prince Harry");
	std::cout << "-------------------------------------------" << std::endl;
	FragTrap Meghan ("Actress Meghan");
	std::cout << "-------------------------------------------" << std::endl;
	Meghan.attack("King Charles");
	std::cout << "-------------------------------------------" << std::endl;
	Charles.takeDamage(30);
	std::cout << "-------------------------------------------" << std::endl;
	Harry.guardGate();
	std::cout << "-------------------------------------------" << std::endl;
	Meghan.highFivesGuys();
	std::cout << "-------------------------------------------" << std::endl;

	return 0;
}
