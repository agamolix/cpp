/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"
#include <iostream>
#include <string>

WrongCat::WrongCat(void) {
	this->type = "WrongCat";
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(WrongCat const & instance) : WrongAnimal() {
	*this = instance;
	std::cout << "WrongCat created by copy" << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & instance) {
	this->type = instance.type;
	std::cout << "WrongCat created by operator =" << std::endl;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat: Miaou" << std::endl;
}


