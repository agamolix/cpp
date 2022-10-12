/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include <iostream>

Fixed::Fixed(void) : _integer(0) {		
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & instance) {
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & instance) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_integer = instance.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_integer);
}

void Fixed::setRawBits(int const raw) {
	this->_integer = raw;
}
