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
#include "Zombie.h"

int main(void)
{
	Zombie inst_zombie;
	std::cout << "Enter zombie's name: ";
	std::string name;
	std::cin >> name;
	inst_zombie.set_name(name); 
	inst_zombie.announce();

	Zombie * inst_zombie2 = newZombie("Scorpion");
	inst_zombie2->announce();
	delete inst_zombie2;

	randomChump("Araignée");

	return 0;	
}