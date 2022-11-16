/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"

Form::Form(void) : _name("Unknown"), _signed(false), _sign_grade(150), _exec_grade(150) { 
	std::cout << "Form created with name Unknown, signed = false and grades (150, 150)" << std::endl;
}

Form::Form(std::string n, int sg, int eg) : _name(n), _signed(false), _sign_grade(sg), _exec_grade(eg) {
	if (sg < 1 || eg < 1)
		throw Form::GradeTooLowException();
	if (sg > 150 || eg > 150)
		throw Form::GradeTooHighException(); 
	std::cout << "Form created with name " << this->_name << ", signed = false and grades (" << this->_sign_grade << " " << this->_exec_grade << ")" << std::endl;
}

Form::~Form(void) {
	std::cout << "Form " << this->_name << " destroyed" << std::endl;
}

Form::Form(Form const & instance) : _name(instance._name), _signed(instance._signed), _sign_grade(instance._sign_grade), _exec_grade(instance._exec_grade) {
//	*this = instance;
}

Form & Form::operator=(Form const & instance) {
	(void) instance;
//	if (&instance != this) this->_name = instance._name;
//	this->_signed = instance._signed;
//	this->_sign_grade = instance._sign_grade;
//	this->_exec_grade = instance._exec_grade;
	return *this; 
}

std::string Form::getName() const {
	return this->_name;
}

bool Form::getSigned() const {
	return this->_signed;
} 

int Form::getSignGrade() const {
	return this->_sign_grade;
} 

int Form::getExecGrade() const {
	return this->_exec_grade;
} 

const char * Form::GradeTooLowException::what() const throw() {
	return "Grade too low";	
}

const char * Form::GradeTooHighException::what() const throw() {
	return "Grade too high";	
}

void Form::beSigned(Bureaucrat & b) {
	if (b.getGrade() > this->_sign_grade)
		throw GradeTooLowException();
	this->_signed = true;
	std::cout << "Form level " << this->_sign_grade << " signed by Bureaucrat " << b.getName() << " with level " << b.getGrade() << std::endl;
}

std::ostream & operator<<(std::ostream & os, Form const & instance) 
{
    os << instance.getName() << ", Form signed: " << std::boolalpha << instance.getSigned() << ", Grades " << instance.getSignGrade() << " " << instance.getExecGrade();
    return os;
}