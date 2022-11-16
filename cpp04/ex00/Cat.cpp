/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"
#include <iostream>
#include <string>

Cat::Cat(void) {
	this->type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(Cat const & instance) : Animal() {
	*this = instance;
	std::cout << "Cat created by copy" << std::endl;
}

Cat::~Cat(void) {
	std::cout << "Cat destroyed" << std::endl;
}

Cat & Cat::operator=(Cat const & instance) {
	this->type = instance.type;
	std::cout << "Cat created by operator =" << std::endl;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Cat: Miaou" << std::endl;
}

void Cat::eat() const {
	std::cout << "Cat: I love birds" << std::endl;
}

