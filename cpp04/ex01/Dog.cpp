/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"
#include <iostream>
#include <string>

Dog::Dog(void) {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog created with brain" << std::endl;
}

Dog::Dog(Dog const & instance) : Animal() {
	*this = instance;
	std::cout << "Dog created by copy" << std::endl;
}

Dog::~Dog(void) {
	delete this->brain;
	std::cout << "Dog and its brain destroyed" << std::endl;
}

Dog & Dog::operator=(Dog const & instance) {
	this->type = instance.type;
	std::cout << "Dog created by operator =" << std::endl;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Dog: Ouaf" << std::endl;
}

void Dog::eat() const {
	std::cout << "Dog: I love bones" << std::endl;
}

void Dog::setType(std::string s) {
	this->type = s;
}

Brain * Dog::findBrain() {
	return this->brain;
}



