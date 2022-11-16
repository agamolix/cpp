/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Duck.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Duck.h"
#include <iostream>
#include <string>

Duck::Duck(void) {
	this->type = "Duck";
	std::cout << "Duck created" << std::endl;
}

Duck::Duck(Duck const & instance) : AAnimal() {
	*this = instance;
	std::cout << "Duck created by copy" << std::endl;
}

Duck::~Duck(void) {
	std::cout << "Duck destroyed" << std::endl;
}

Duck & Duck::operator=(Duck const & instance) {
	this->type = instance.type;
	std::cout << "Duck created by operator =" << std::endl;
	return *this;
}

void Duck::makeSound() const {
	std::cout << "Duck: Coin Coin" << std::endl;
}

void Duck::eat() const {
	std::cout << "Duck: I love fish" << std::endl;
}



