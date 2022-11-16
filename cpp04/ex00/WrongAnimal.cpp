/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal(void) {
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & instance) {
	*this = instance;
	std::cout << "WrongAnimal created by copy" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & instance) {
	this->type = instance.type;
	std::cout << "WrongAnimal created by operator =" << std::endl;
	return *this;
}

std::string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const {}


