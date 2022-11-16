/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.h"
#include <iostream>
#include <string>

AAnimal::AAnimal(void) {
	this->type = "AAnimal";
	std::cout << "AAnimal created" << std::endl;
}

AAnimal::AAnimal(AAnimal const & instance) {
	*this = instance;
	std::cout << "AAnimal created by copy" << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal destroyed" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & instance) {
	this->type = instance.type;
//	if (this->type == "Cat" || this->type == "Dog")
				
	std::cout << "AAnimal created by operator =" << std::endl;
	return *this;
}

std::string AAnimal::getType() const {
	return this->type;
}

void AAnimal::setType(std::string s) {
	this->type = s;
}

void AAnimal::makeSound() const {}

void AAnimal::eat() const {}

Brain * AAnimal::findBrain() {
	return 0;
}
