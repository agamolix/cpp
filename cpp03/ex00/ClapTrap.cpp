/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(void) : _name("X"), _hitpoints(10), _energypoints(10), _attackdamage(0) {	
	std::cout << "[ClapTrap] X is here with 10 Hit Points, 10 Energy Points and 0 Attack Damage" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energypoints(10), _attackdamage(0) {	
	std::cout << "[ClapTrap] " << this->_name << " is here with 10 Hit Points, 10 Energy Points and 0 Attack Damage" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & instance) {
	std::cout << "[ClapTrap] Copy called from " << instance._name << std::endl;
	*this = instance;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "[ClapTrap] " << this->_name << " is destroyed" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & instance) {
	std::cout << "[ClapTrap] Operator = called from " << instance._name << std::endl;
	this->_name = instance._name;
	this->_hitpoints = instance._hitpoints;
	this->_energypoints = instance._energypoints;
	this->_attackdamage = instance._attackdamage;
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (this->_hitpoints < 1)
		std::cout << "[ClapTrap] " << this->_name << " can't attack " << target << " (no Hit Points)" << std::endl;	
	else if (this->_energypoints < 1)
		std::cout << "[ClapTrap] " << this->_name << " can't attack " << target << " (no Energy Points)" << std::endl;	
	else
	{
		this->_energypoints--;
		std::cout << "[ClapTrap] " << this->_name << " attacks " << target << std::endl;
		std::cout << "[ClapTrap] " << target << " loses " << this->_attackdamage << " Hit Points" << std::endl;
		std::cout << "[ClapTrap] " << this->_name << " has now " << this->_hitpoints << " Hit Points and " << this->_energypoints << " Energy Points" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitpoints < 1)
		std::cout << "[ClapTrap] " << this->_name << " can't take damage (no Hit Points)" << std::endl;	
	else if (this->_energypoints < 1)
		std::cout << "[ClapTrap] " << this->_name << " can't take damage (no Energy Points)" << std::endl;	
	else
	{
		this->_hitpoints -= amount;
		std::cout << "[ClapTrap] " << this->_name << " loses " << amount << " Hit Points" << std::endl;
		std::cout << "[ClapTrap] " << this->_name << " has now " << this->_hitpoints << " Hit Points and " << this->_energypoints << " Energy Points" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitpoints < 1)
		std::cout << "[ClapTrap] " << this->_name << " can't be repaired (no Hit Points)" << std::endl;	
	else if (this->_energypoints < 1)
		std::cout << "[ClapTrap] " << this->_name << " can't be repaired (no Energy Points)" << std::endl;	
	else
	{
		this->_energypoints--;
		this->_hitpoints += amount;
		std::cout << "[ClapTrap] " << this->_name << " is repaired by " << amount << " Hit Points" << std::endl;
		std::cout << "[ClapTrap] " << this->_name << " has now " << this->_hitpoints << " Hit Points and " << this->_energypoints << " Energy Points" << std::endl;
	}
}
