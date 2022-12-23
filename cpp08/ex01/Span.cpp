/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/12/22 15:29:16 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.h"

Span::Span(unsigned int n) : _size(n) {
	std::cout << "[ Standard constructor ]" << std::endl;
}

Span::~Span() {
	std::cout << "[ Destructor ]" << std::endl;
}

Span::Span (Span const & instance) {
	std::cout << "[ Copy constructor ]" << std::endl;
	*this = instance;
}

Span & Span::operator=(Span const & instance) {
	std::cout << "[ Operator = constructor ]" << std::endl;
	this->_size = instance._size;
	this->_tab = instance._tab;
	return *this;
}

std::vector<int> & Span::getTab() {
	return (this->_tab);
}

void Span::addNumber(int i) {
	if (this->_tab.size() == this->_size)
		throw ExceptionFull();
	else
	{
		this->_tab.push_back(i);
		std::cout << "nb ajouté: " << i << std::endl;
	}
}

const char * Span::ExceptionFull::what(void) const throw() {
	return "ERROR: Span is full";
}

int Span::longestSpan() {
	if (this->_tab.size() < 2)
		throw ExceptionNotEnoughNb();
	int min = *(std::min_element(this->_tab.begin(), this->_tab.end()));
	int max = *(std::max_element(this->_tab.begin(), this->_tab.end()));
	return max - min;
}

int Span::shortestSpan() {
	if (this->_tab.size() < 2)
		throw ExceptionNotEnoughNb();
	std::vector<int> res = this->_tab;
	std::sort(res.begin(), res.end());
	adjacent_difference(res.begin(), res.end(), res.begin());
	return *(std::min_element(res.begin() + 1, res.end()));
}

const char * Span::ExceptionNotEnoughNb::what(void) const throw() {
	return "ERROR: Not enough numbers in the span";
}

void Span::fillIteratorRange(std::vector<int>::iterator it1, std::vector<int>::iterator it2) {
	this->_tab.assign(it1, it2);
}

void Span::fillAlea(unsigned int n) {
	for (unsigned i = 0; i < n; i++)
		this->_tab.push_back(rand() / 1000);
}

