/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/12/08 12:56:31 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _integer(0) {		
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
//	std::cout << "1- f = " << f << std::endl;
//	std::cout << "2- 1 << Fixed::_bits = " << (1 << Fixed::_bits) << std::endl;
//	std::cout << "3- f * (1 << Fixed::_bits) = " << (f * (1 << Fixed::_bits)) << std::endl;
//	std::cout << "4- roundf(f * (1 << Fixed::_bits)) = " << (roundf(f * (1 << Fixed::_bits))) << std::endl;
//	std::cout << "5- (int)roundf(f * (1 << Fixed::_bits)) = " << ((int)(roundf(f * (1 << Fixed::_bits)))) << std::endl;
	this->_integer = (int)roundf(f * (1 << Fixed::_bits));
}

Fixed::Fixed(const int i) {
	std::cout << "Int constructor called" << std::endl;
//	std::cout << "1- _integer = " << this->_integer << std::endl;
	this->_integer = i << Fixed::_bits;
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

float Fixed::toFloat(void) const {
//	std::cout << "1- _integer = " << this->_integer << std::endl;
//	std::cout << "2- 1 << Fixed::_bits = " << (1 << Fixed::_bits) << std::endl;
//	std::cout << "3- (float)(1 << Fixed::_bits) = " << (float)(1 << Fixed::_bits) << std::endl;
//	std::cout << "4- _integer / (float)(1 << Fixed::_bits) = " << this->_integer / (float)(1 << Fixed::_bits) << std::endl;
	return (this->_integer / (float)(1 << Fixed::_bits));
}

int Fixed::toInt(void) const
{
	return (this->_integer >> Fixed::_bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & instance)
{
	o << instance.toFloat();
	return o;
}


