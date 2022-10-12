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
#include <cmath>

Fixed::Fixed(void) : _value(0) {		
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float f) {
//	std::cout << "Float constructor called" << std::endl;
//	std::cout << "1- f = " << f << std::endl;
//	std::cout << "2- 1 << Fixed::_bits = " << (1 << Fixed::_bits) << std::endl;
//	std::cout << "3- f * (1 << Fixed::_bits) = " << (f * (1 << Fixed::_bits)) << std::endl;
//	std::cout << "4- roundf(f * (1 << Fixed::_bits)) = " << (roundf(f * (1 << Fixed::_bits))) << std::endl;
//	std::cout << "5- (int)roundf(f * (1 << Fixed::_bits)) = " << ((int)(roundf(f * (1 << Fixed::_bits)))) << std::endl;
	this->_value = (int)roundf(f * (1 << Fixed::_bits));
}

Fixed::Fixed(const int i) {
//	std::cout << "Int constructor called" << std::endl;
//	std::cout << "1- _value = " << this->_value << std::endl;
	this->_value = i << Fixed::_bits;
}

Fixed::Fixed(Fixed const & instance) {
//	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

Fixed::~Fixed(void) {
//	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & instance) {
//	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = instance.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float Fixed::toFloat(void) const {
//	std::cout << "1- _value = " << this->_value << std::endl;
//	std::cout << "2- 1 << Fixed::_bits = " << (1 << Fixed::_bits) << std::endl;
//	std::cout << "3- (float)(1 << Fixed::_bits) = " << (float)(1 << Fixed::_bits) << std::endl;
//	std::cout << "4- _value / (float)(1 << Fixed::_bits) = " << this->_value / (float)(1 << Fixed::_bits) << std::endl;
	return (this->_value / (float)(1 << Fixed::_bits));
}

int Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & instance)
{
	o << instance.toFloat();
	return o;
}

Fixed Fixed::operator+(Fixed const & instance) const {
	std::cout << "Addition operator called with " << this->_value / (float)(1 << Fixed::_bits) << " and " << instance._value / (float)(1 << Fixed::_bits) << "  ===>  ";
	return (Fixed(this->_value / (float)(1 << Fixed::_bits) + instance._value / (float)(1 << Fixed::_bits)));	
}

Fixed Fixed::operator-(Fixed const & instance) const {
	std::cout << "Substraction operator called with " << this->_value / (float)(1 << Fixed::_bits) << " and " << instance._value / (float)(1 << Fixed::_bits) << "  ===>  ";
	return (Fixed(this->_value / (float)(1 << Fixed::_bits) - instance._value / (float)(1 << Fixed::_bits)));	
}

Fixed Fixed::operator*(Fixed const & instance) const {
	std::cout << "Multiplication operator called with " << this->_value / (float)(1 << Fixed::_bits) << " and " << instance._value / (float)(1 << Fixed::_bits) << "  ===>  ";
	return (Fixed(this->_value / (float)(1 << Fixed::_bits) * instance._value / (float)(1 << Fixed::_bits)));	
}

Fixed Fixed::operator/(Fixed const & instance) const {
	std::cout << "Division operator called with " << this->_value / (float)(1 << Fixed::_bits) << " and " << instance._value / (float)(1 << Fixed::_bits) << "  ===>  ";
	return (Fixed(this->_value / (float)(1 << Fixed::_bits) / instance._value / (float)(1 << Fixed::_bits)));	
}

bool Fixed::operator>(Fixed const & instance) const {
//	std::cout << "Comparison > operator called with " << this->_value << " and " << instance._value << std::endl;
	std::cout << "Comparison > operator called with " << this->_value / (float)(1 << Fixed::_bits) << " and " << instance._value / (float)(1 << Fixed::_bits) << "  ===>  ";
	return (this->_value > instance._value);
}

bool Fixed::operator<(Fixed const & instance) const {
	std::cout << "Comparison < operator called with " << this->_value / (float)(1 << Fixed::_bits) << " and " << instance._value / (float)(1 << Fixed::_bits) << "  ===>  ";
	return (this->_value < instance._value);
}

bool Fixed::operator>=(Fixed const & instance) const {
	std::cout << "Comparison >= operator called with " << this->_value / (float)(1 << Fixed::_bits) << " and " << instance._value / (float)(1 << Fixed::_bits) << "  ===>  ";
	return (this->_value >= instance._value);
}

bool Fixed::operator<=(Fixed const & instance) const {
	std::cout << "Comparison <= operator called with " << this->_value / (float)(1 << Fixed::_bits) << " and " << instance._value / (float)(1 << Fixed::_bits) << "  ===>  ";
	return (this->_value <= instance._value);
}

bool Fixed::operator==(Fixed const & instance) const {
	std::cout << "Comparison == operator called with " << this->_value / (float)(1 << Fixed::_bits) << " and " << instance._value / (float)(1 << Fixed::_bits) << "  ===>  ";
	return (this->_value == instance._value);
}

bool Fixed::operator!=(Fixed const & instance) const {
	std::cout << "Comparison != operator called with " << this->_value / (float)(1 << Fixed::_bits) << " and " << instance._value / (float)(1 << Fixed::_bits) << "  ===>  ";
	return (this->_value != instance._value);
}

Fixed & Fixed::operator++(void) {
	std::cout << "Pre-Incrementation ++ operator called with _value = " << this->_value << "  ===>  ";
	++this->_value;
	std::cout << "value = " << this->_value << std::endl;
	return *this;
}

Fixed & Fixed::operator--(void) {
	std::cout << "Pre-Decrementation -- operator called with _value = " << this->_value << "  ===>  ";
	--this->_value;
	std::cout << "value = " << this->_value << std::endl;
	return *this;
}

Fixed Fixed::operator++(int i) {
	(void) i;
	std::cout << "Post-Incrementation ++ operator called with _value = " << this->_value << std::endl;
	Fixed temp;
	temp._value = this->_value;
	this->_value++;
	return temp;
}

Fixed Fixed::operator--(int i) {
	(void) i;
	std::cout << "Post-Decrementation -- operator called with _value = " << this->_value << std::endl;
	Fixed temp;
	temp._value = this->_value;
	this->_value--;
	return temp;
}

float Fixed::min(Fixed const & inst1, Fixed const & inst2) {
	return fmin(inst1.toFloat(), inst2.toFloat());
}

float Fixed::min(Fixed & inst1, Fixed & inst2) {
	return fmin(inst1.toFloat(), inst2.toFloat());
}

float Fixed::max(Fixed const & inst1, Fixed const & inst2) {
	return fmax(inst1.toFloat(), inst2.toFloat());
}

float Fixed::max(Fixed & inst1, Fixed & inst2) {
	return fmax(inst1.toFloat(), inst2.toFloat());
}