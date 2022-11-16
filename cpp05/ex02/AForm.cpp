/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.h"

AForm::AForm(void) : _name("Unknown"), _signed(false), _sign_grade(150), _exec_grade(150) { 
	std::cout << "AForm created with name Unknown, signed = false and grades (150, 150)" << std::endl;
}

AForm::AForm(std::string n, int sg, int eg) : _name(n), _signed(false), _sign_grade(sg), _exec_grade(eg) {
	if (sg < 1 || eg < 1)
		throw AForm::GradeTooLowException();
	if (sg > 150 || eg > 150)
		throw AForm::GradeTooHighException(); 
	std::cout << "AForm created with name " << this->_name << ", signed = false and grades (" << this->_sign_grade << " " << this->_exec_grade << ")" << std::endl;
}

AForm::~AForm(void) {
	std::cout << "AForm " << this->_name << " destroyed" << std::endl;
}

AForm::AForm(AForm const & instance) : _name(instance._name), _signed(instance._signed), _sign_grade(instance._sign_grade), _exec_grade(instance._exec_grade) {
//	*this = instance;
}

AForm & AForm::operator=(AForm const & instance) {
	(void) instance;
//	if (&instance != this) this->_name = instance._name;
//	this->_signed = instance._signed;
//	this->_sign_grade = instance._sign_grade;
//	this->_exec_grade = instance._exec_grade;
	return *this; 
}

std::string AForm::getName() const {
	return this->_name;
}

bool AForm::getSigned() const {
	return this->_signed;
} 

int AForm::getSignGrade() const {
	return this->_sign_grade;
} 

int AForm::getExecGrade() const {
	return this->_exec_grade;
} 

const char * AForm::GradeTooLowException::what() const throw() {
	return "Grade too low";	
}

const char * AForm::GradeTooHighException::what() const throw() {
	return "Grade too high";	
}

const char * AForm::FormNotSignedException::what() const throw() {
	return "Form not signed";	
}

void AForm::beSigned(Bureaucrat & b) {
	if (b.getGrade() > this->_sign_grade)
		throw GradeTooLowException();
	this->_signed = true;
	std::cout << "AForm level " << this->_sign_grade << " signed by Bureaucrat " << b.getName() << " with level " << b.getGrade() << std::endl;
}

std::ostream & operator<<(std::ostream & os, AForm const & instance) 
{
    os << instance.getName() << ", signed: " << std::boolalpha << instance.getSigned() << ", Grades " << instance.getSignGrade() << " " << instance.getExecGrade();
    return os;
}

std::string AForm::getTarget() const {
	return this->_target;
} 

void AForm::setTarget(std::string s) {
	this->_target = s;
}

void AForm::setSigned(bool b) {
	this->_signed = b;
}

void AForm::execute(Bureaucrat const & executor) const {
	if (!this->getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	this->exec();
	std::cout << "Form " << this->_name << " was executed properly" << std::endl;
} 


