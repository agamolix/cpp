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

int main (void) {

	Bureaucrat Alexandre("Alexandre", 1);
	std::cout << "---------------------------------------------" << std::endl;
	Bureaucrat Boris("Boris", 150);
	std::cout << "=============================================" << std::endl;
	ShrubberyCreationForm shrub1("garden");
	std::cout << "---------------------------------------------" << std::endl;
	try {
		shrub1.beSigned(Alexandre);
	}
	catch(AForm::GradeTooLowException & e) {
		std::cout << "Form not signed: " << e.what() << std::endl;
	}
	try {
		shrub1.beSigned(Boris);
	}
	catch(AForm::GradeTooLowException & e) {
		std::cout << "Form not signed: " << e.what() << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	try {
		shrub1.execute(Alexandre);
	}
	catch(AForm::FormNotSignedException & e) {
		std::cout << "Action not executed: " << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException & e) {
		std::cout << "Action not executed: " << e.what() << std::endl;
	}
	try {
		shrub1.execute(Boris);
	}
	catch(AForm::FormNotSignedException & e) {
		std::cout << "Action not executed: " << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException & e) {
		std::cout << "Action not executed: " << e.what() << std::endl;
	}
	std::cout << "=============================================" << std::endl;
	
	RobotomyRequestForm robot1("doll");
	std::cout << "---------------------------------------------" << std::endl;
	try {
		robot1.beSigned(Alexandre);
	}
	catch(AForm::GradeTooLowException & e) {
		std::cout << "Form not signed: " << e.what() << std::endl;
	}
	try {
		robot1.beSigned(Boris);
	}
	catch(AForm::GradeTooLowException & e) {
		std::cout << "Form not signed: " << e.what() << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	try {
		robot1.execute(Alexandre);
	}
	catch(AForm::FormNotSignedException & e) {
		std::cout << "Action not executed: " << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException & e) {
		std::cout << "Action not executed: " << e.what() << std::endl;
	}
	try {
		robot1.execute(Boris);
	}
	catch(AForm::FormNotSignedException & e) {
		std::cout << "Action not executed: " << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException & e) {
		std::cout << "Action not executed: " << e.what() << std::endl;
	}
	std::cout << "=============================================" << std::endl;

	PresidentialPardonForm pardon1("Chacha");
	std::cout << "---------------------------------------------" << std::endl;
	try {
		pardon1.beSigned(Alexandre);
	}
	catch(AForm::GradeTooLowException & e) {
		std::cout << "Form not signed: " << e.what() << std::endl;
	}
	try {
		pardon1.beSigned(Boris);
	}
	catch(AForm::GradeTooLowException & e) {
		std::cout << "Form not signed: " << e.what() << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	try {
		pardon1.execute(Alexandre);
	}
	catch(AForm::FormNotSignedException & e) {
		std::cout << "Action not executed: " << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException & e) {
		std::cout << "Action not executed: " << e.what() << std::endl;
	}
	try {
		pardon1.execute(Boris);
	}
	catch(AForm::FormNotSignedException & e) {
		std::cout << "Action not executed: " << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException & e) {
		std::cout << "Action not executed: " << e.what() << std::endl;
	}
	std::cout << "=============================================" << std::endl;
	Alexandre.executeForm(pardon1);
	std::cout << "---------------------------------------------" << std::endl;
	Boris.executeForm(pardon1);
	std::cout << "=============================================" << std::endl;

	return 0;
}
