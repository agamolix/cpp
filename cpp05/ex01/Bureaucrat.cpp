/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(void) {
	this->_name = "Unknown";
	this->_grade = 150;
	std::cout << "Bureaucrat created with name Unknown and grade 150" << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, int g) : _name(n) {
	if (g < 1)
		throw Bureaucrat::GradeTooLowException();
	if (g > 150)
		throw Bureaucrat::GradeTooHighException(); 
	this->_grade = g;
	std::cout << "Bureaucrat created with name " << this->_name << " and grade " << this->_grade << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat " << this->_name << " destroyed" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & instance) {
	*this = instance;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & instance) {
	this->_name = instance._name;
	this->_grade = instance._grade;
	return *this; 
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
} 

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low";	
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high";	
}

void Bureaucrat::increment() {
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
	std::cout << "Le grade de " << this->_name << "est maintenant" << this->_grade << std::endl;
}

void Bureaucrat::decrement() {
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
	std::cout << "Le grade de " << this->_name << " est maintenant" << this->_grade << std::endl;
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & instance) 
{
    os << instance.getName() << ", bureaucrat grade " << instance.getGrade();
    return os;
}

void Bureaucrat::signForm(Form & f) {
	if (f.getSigned())
		std::cout << this->getName() << " signed Form " << f.getName() << std::endl;
	else
		std::cout << this->getName() << " couldn't sign Form " << f.getName() << " because he has no authorization for that " << std::endl;
}