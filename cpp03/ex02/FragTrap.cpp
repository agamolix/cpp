/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "FragTrap.h"

FragTrap::FragTrap(void) : ClapTrap() {
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;	
	std::cout << "[FragTrap] X is here with 100 Hit Points, 100 Energy Points and 30 Attack Damage" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {	
	this->_name = name;
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;	
	std::cout << "[FragTrap] " << this->_name << " is here with 100 Hit Points, 100 Energy Points and 30 Attack Damage" << std::endl;
}

FragTrap::FragTrap(FragTrap const & instance) : ClapTrap() {
	std::cout << "[FragTrap] Copy called from " << instance._name << std::endl;
	*this = instance;
}

FragTrap::~FragTrap(void) {
	std::cout << "[FragTrap] " << this->_name << " is destroyed" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & instance) {
	std::cout << "[FragTrap] Operator = called from " << instance._name << std::endl;
	this->_name = instance._name;
	this->_hitpoints = instance._hitpoints;
	this->_energypoints = instance._energypoints;
	this->_attackdamage = instance._attackdamage;
	return *this;
}

void FragTrap::attack(const std::string& target) {
	if (this->_hitpoints < 1)
		std::cout << "[FragTrap] " << this->_name << " can't attack " << target << " (no Hit Points)" << std::endl;	
	else if (this->_energypoints < 1)
		std::cout << "[FragTrap] " << this->_name << " can't attack " << target << " (no Energy Points)" << std::endl;	
	else
	{
		this->_energypoints--;
		std::cout << "[FragTrap] " << this->_name << " kicks " << target << std::endl;
		std::cout << "[FragTrap] " << target << " loses " << this->_attackdamage << " Hit Points" << std::endl;
		std::cout << "[FragTrap] " << this->_name << " has now " << this->_hitpoints << " Hit Points and " << this->_energypoints << " Energy Points" << std::endl;
	}
}

void FragTrap::highFivesGuys(void) {
	std::cout << "[FragTrap] " << this->_name << " wants a highfive" << std::endl;
}

