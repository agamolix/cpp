/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"

int main (void) {

	Intern Sophie;
	Sophie.makeForm("ShrubberyCreationForm", "roof");

	std::cout << "=============================================" << std::endl;

	Sophie.makeForm("Shrub", "roof");

	std::cout << "=============================================" << std::endl;

	AForm * aaa;
	aaa = Sophie.makeForm("RobotomyRequestForm", "barbie");
	(void) aaa;

	std::cout << "=============================================" << std::endl;

	return 0;
}
