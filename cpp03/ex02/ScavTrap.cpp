/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"
#include "ClapTrap.h"

ScavTrap::ScavTrap(void) : ClapTrap() {
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;	
	std::cout << "[ScavTrap] X is here with 100 Hit Points, 50 Energy Points and 20 Attack Damage" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {	
	this->_name = name;
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;	
	std::cout << "[ScavTrap] " << this->_name << " is here with 100 Hit Points, 50 Energy Points and 20 Attack Damage" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & instance) : ClapTrap() {
	std::cout << "[ScavTrap] Copy called from " << instance._name << std::endl;
	*this = instance;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "[ScavTrap] " << this->_name << " is destroyed" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & instance) {
	std::cout << "[ScavTrap] Operator = called from " << instance._name << std::endl;
	this->_name = instance._name;
	this->_hitpoints = instance._hitpoints;
	this->_energypoints = instance._energypoints;
	this->_attackdamage = instance._attackdamage;
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (this->_hitpoints < 1)
		std::cout << "[ScavTrap] " << this->_name << " can't attack " << target << " (no Hit Points)" << std::endl;	
	else if (this->_energypoints < 1)
		std::cout << "[ScavTrap] " << this->_name << " can't attack " << target << " (no Energy Points)" << std::endl;	
	else
	{
		this->_energypoints--;
		std::cout << "[ScavTrap] " << this->_name << " shoots " << target << std::endl;
		std::cout << "[ScavTrap] " << target << " loses " << this->_attackdamage << " Hit Points" << std::endl;
		std::cout << "[ScavTrap] " << this->_name << " has now " << this->_hitpoints << " Hit Points and " << this->_energypoints << " Energy Points" << std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << "[ScavTrap] " << this->_name << " is now in mode GuardGate" << std::endl;

}

