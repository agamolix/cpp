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

int main (void) {

	Bureaucrat X;

	std::cout << "-----------------------------" << std::endl;

	try
	{
		Bureaucrat Alexandre("Alexandre", 500);
		std::cout << Alexandre << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException & e)
	{
		std::cout << "Bureaucrat not created: " << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException & e)
	{
		std::cout << "Bureaucrat not created: " << e.what() << std::endl;
	}

	std::cout << "-----------------------------" << std::endl;

	try	{
		Bureaucrat Boris("Boris", -20);
		std::cout << Boris << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException & e) {
		std::cout << "Bureaucrat not created: " << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException & e) {
		std::cout << "Bureaucrat not created: " << e.what() << std::endl;
	}

	std::cout << "-----------------------------" << std::endl;

	try	{
		Bureaucrat Clemence("Clémence", 50);
		std::cout << Clemence << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException & e) {
		std::cout << "Bureaucrat not created: " << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException & e)	{
		std::cout << "Bureaucrat not created: " << e.what() << std::endl;
	}

	std::cout << "-----------------------------" << std::endl;

	try	{
		Bureaucrat Damien("Damien", 150);
		std::cout << Damien << std::endl;
		Damien.decrement();
	}
	catch(Bureaucrat::GradeTooLowException & e)	{
		std::cout << "Bureaucrat not decremented: " << e.what() << std::endl;
	}

	std::cout << "-----------------------------" << std::endl;

	try	{
		Bureaucrat Enzo("Enzo", 1);
		std::cout << Enzo << std::endl;
		Enzo.increment();
	}
	catch(Bureaucrat::GradeTooHighException & e)	{
		std::cout << "Bureaucrat not incremented: " << e.what() << std::endl;
	}

	std::cout << "-----------------------------" << std::endl;

	try	{
		Bureaucrat Fabio("Fabio", 50);
		std::cout << Fabio << std::endl;
		Fabio.increment();
	}
	catch(Bureaucrat::GradeTooHighException & e)	{
		std::cout << "Bureaucrat not incremented: " << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException & e)	{
		std::cout << "Bureaucrat not incremented: " << e.what() << std::endl;
	}

	std::cout << "-----------------------------" << std::endl;

	return 0;
}
