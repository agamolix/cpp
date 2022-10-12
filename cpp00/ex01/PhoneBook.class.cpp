/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.h"
#include "Contact.class.h"
#include <string>
#include <iomanip>

PhoneBook::PhoneBook(void) {
	}

PhoneBook::~PhoneBook(void) {
	}

int	PhoneBook::_nb_entries = 0;

int PhoneBook::get_nb_entries(void) const {
	return(_nb_entries); }

std::string PhoneBook::get_first_name(int i) const {
	return(_first_name[i]); }

std::string PhoneBook::get_last_name(int i) const {
	return(_last_name[i]); }

std::string PhoneBook::get_nickname(int i) const {
	return(_nickname[i]); }

std::string PhoneBook::get_phone_number(int i) const {
	return(_phone_number[i]); }

std::string PhoneBook::get_darkest_secret(int i) const {
	return(_darkest_secret[i]); }

void PhoneBook::add_to_phonebook(Contact &inst_contact)
{
	int i;
	if (_nb_entries < 8)
	{
		i = _nb_entries;
		_index[i] = i;
		_first_name[i] = inst_contact.get_first_name();
		_last_name[i] = inst_contact.get_last_name();
		_nickname[i] = inst_contact.get_nickname();
		_phone_number[i] = inst_contact.get_phone_number();
		_darkest_secret[i] = inst_contact.get_darkest_secret();
		_nb_entries++;		
	}
	else
	{
		i = 0;
		while (i < 7)
		{
			_first_name[i] = _first_name[i + 1];
			_last_name[i] = _last_name[i + 1];
			_nickname[i] = _nickname[i + 1];
			_phone_number[i] = _phone_number[i + 1];
			_darkest_secret[i] = _darkest_secret[i + 1];
			i++;
		}
		_first_name[7] = inst_contact.get_first_name();
		_last_name[7] = inst_contact.get_last_name();
		_nickname[7] = inst_contact.get_nickname();
		_phone_number[7] = inst_contact.get_phone_number();
		_darkest_secret[7] = inst_contact.get_darkest_secret();
	}	
}

void PhoneBook::display_lines(void)  
{
	std::cout << "********************************************" << std::endl;
	int i = 0;
	while (i < _nb_entries)
	{
		std::cout << std::setw(10) << _index[i] << '|';
		std::cout << std::setw(10) << truncate(_first_name[i]) << '|';
		std::cout << std::setw(10) << truncate(_last_name[i]) << '|';
		std::cout << std::setw(10) << truncate(_nickname[i]) << std::endl;
		i++;
	}
	std::cout << "********************************************" << std::endl;
}

void PhoneBook::display_contact(int index_search)  
{
	std::cout << "********************************************" << std::endl;
	std::cout << "First name: " << _first_name[index_search] << std::endl;
	std::cout << "Last name: " << _last_name[index_search] << std::endl;
	std::cout << "Nickname: " << _nickname[index_search] << std::endl;
	std::cout << "Phone number: " << _phone_number[index_search] << std::endl;
	std::cout << "Darkest secret: " << _darkest_secret[index_search] << std::endl;
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
