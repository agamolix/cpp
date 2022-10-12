/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.h"
#include <string>
#include <iostream>

Contact::Contact(void) {
	}

Contact::~Contact(void) {
	}

std::string Contact::get_first_name(void) const {
	return(_first_name); }

std::string Contact::get_last_name(void) const {
	return(_last_name); }

std::string Contact::get_nickname(void) const {
	return(_nickname); }

std::string Contact::get_phone_number(void) const {
	return(_phone_number); }

std::string Contact::get_darkest_secret(void) const {
	return(_darkest_secret); }

void Contact::add_contact(void)
{
	std::cout << "********************************************" << std::endl;
	std::cout << "First name: ";
	std::getline(std::cin >> std::ws, _first_name);
	std::cout << "Last name: ";
	std::getline(std::cin >> std::ws, _last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin >> std::ws, _nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin >> std::ws, _phone_number);
	std::cout << "Darkest secret: ";
	std::getline(std::cin >> std::ws, _darkest_secret);
	std::cout << "********************************************" << std::endl;

}
