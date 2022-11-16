/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include <iostream>
#include <string>

Animal::Animal(void) {
	this->type = "Animal";
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(Animal const & instance) {
	*this = instance;
	std::cout << "Animal created by copy" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Animal destroyed" << std::endl;
}

Animal & Animal::operator=(Animal const & instance) {
	this->type = instance.type;
	std::cout << "Animal created by operator =" << std::endl;
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {}

void Animal::eat() const {}

