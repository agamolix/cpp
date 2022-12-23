/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/12/08 11:31:08 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
	Zombie * inst_hordeZombie = zombieHorde(5, "Scorpion");
	for (int i = 0; i < 5; i++)
		inst_hordeZombie[i].announce();
	
	delete [] inst_hordeZombie;

	return 0;	
}