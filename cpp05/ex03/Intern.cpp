/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.h"

Intern::Intern(void) {
	std::cout << "Intern created" << std::endl;
}

Intern::~Intern(void) {
	std::cout << "Intern destroyed" << std::endl;
}

Intern::Intern(Intern const & instance) {
	*this = instance;
}

Intern & Intern::operator=(Intern const & instance) {
	(void) instance;
	return *this; 
}

AForm * Intern::makeForm(std::string name, std::string target) {
	t_list list[] = { 
		{"ShrubberyCreationForm", new ShrubberyCreationForm(target)},
		{"RobotomyRequestForm", new RobotomyRequestForm(target)},
		{"PresidentialPardonForm", new PresidentialPardonForm(target)} };
	
	AForm * res = 0;

	int i = 0;
	while (i < 3)
	{
		if (list[i].name == name)
			res = list[i].type;
		else
			delete list[i].type;
		i++;
	}

	if (res)
		std::cout << "\nIntern created the form " << name << std::endl;

	else
		std::cout << "\nForm " << name << " does not exist!!" << std::endl;

	return res;
}