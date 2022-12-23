/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp 		                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.h"
#include <string>
#include <iomanip>

int PhoneBook::_nb_entries = 0;

PhoneBook::PhoneBook(void) {
	}

PhoneBook::~PhoneBook(void) {
	return;
	}

int PhoneBook::get_nb_entries(void) const {
	return(_nb_entries); }

void PhoneBook::add_to_phonebook(void)
{
	int i;
	if (_nb_entries < 8)
	{
		i = _nb_entries;
		this->_contact[i].add_contact();
		_nb_entries++;		
	}
	else
	{
		i = 0;
		while (i < 7)
		{
			this->_contact[i] = this->_contact[i + 1];
			i++;
		}
		this->_contact[7].add_contact();
	}	
}

void PhoneBook::display_lines(void)  
{
	std::cout << "********************************************" << std::endl;
	int i = 0;
	while (i < _nb_entries)
	{
		std::cout << std::setw(10) << i << '|';
		std::cout << std::setw(10) << truncate(this->_contact[i].get_first_name()) << '|';
		std::cout << std::setw(10) << truncate(this->_contact[i].get_last_name()) << '|';
		std::cout << std::setw(10) << truncate(this->_contact[i].get_nickname()) << std::endl;
		i++;
	}
	std::cout << "********************************************" << std::endl;
}

void PhoneBook::display_contact(int index_search)  
{
	std::cout << "********************************************" << std::endl;
	std::cout << "First name: " << this->_contact[index_search].get_first_name() << std::endl;
	std::cout << "Last name: " << this->_contact[index_search].get_last_name() << std::endl;
	std::cout << "Nickname: " << this->_contact[index_search].get_nickname() << std::endl;
	std::cout << "Phone number: " << this->_contact[index_search].get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << this->_contact[index_search].get_darkest_secret() << std::endl;
	std::cout << "********************************************" << std::endl;
}

std::string PhoneBook::truncate(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str += '.';
	}
	return str;
}
