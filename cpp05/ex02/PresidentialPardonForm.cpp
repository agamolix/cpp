/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Presidential pardon", 25, 5) { 
	this->setTarget("no target");
	std::cout << "Presidential pardon created with name " << this->getName() << ", target = no target, signed = false and grades (72, 45)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string t) : AForm("Presidential pardon", 25, 5) {
	this->setTarget(t);
	std::cout << "Presidential pardon created with name " << this->getName() << ", target = " << t << ", signed = false and grades (" << this->getSignGrade() << " " << this->getExecGrade() << ")" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "Presidential pardon " << this->getName() << " destroyed" << std::endl;
}

/*PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const 
& instance) : AForm(instance._name, instance._sign_grade, instance._exec_grade) {
	this->setTarget(instance._target);
}
*/
/*PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & instance) {
	(void) instance;
//	if (&instance != this) this->_name = instance._name;
//	this->_signed = instance._signed;
//	this->_sign_grade = instance._sign_grade;
//	this->_exec_grade = instance._exec_grade;
	return *this; 
}*/

void PresidentialPardonForm::beSigned(Bureaucrat & b) {
	if (b.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	this->setSigned(true);
	std::cout << "Presidential pardon level " << this->getSignGrade() << " signed by Bureaucrat " << b.getName() << " with level " << b.getGrade() << std::endl;
}

void PresidentialPardonForm::exec() const {
	std::cout << "Amazing: [" << this->getTarget() << "] was pardonned by Zaphod Beeblebrox" << std::endl;
}	


