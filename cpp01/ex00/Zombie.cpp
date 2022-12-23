/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/12/08 11:25:36 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(void){
	this->_name = "unknown";
	std::cout << "Zombie construit" << std::endl;
}

Zombie::~Zombie(void){
	std::cout << "Zombie " << this->_name << " détruit" << std::endl;
}

std::string Zombie::get_name() {
	return this->_name;
}

void Zombie::set_name(std::string name) {
	this->_name = name;
}

void Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


