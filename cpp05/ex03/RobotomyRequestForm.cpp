/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy", 72, 45) { 
	this->setTarget("no target");
	if (verbose)
		std::cout << "[RRF] created with name " << this->getName() << ", target = no target, signed = false and grades (72, 45)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string t) : AForm("Robotomy", 72, 45) {
	this->setTarget(t);
	if (verbose)
		std::cout << "[RRF] created with name " << this->getName() << ", target = " << t << ", signed = false and grades (" << this->getSignGrade() << " " << this->getExecGrade() << ")" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	if (verbose)
		std::cout << "[RRF] " << this->getName() << " destroyed" << std::endl;
}

/*RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const 
& instance) : AForm(instance._name, instance._sign_grade, instance._exec_grade) {
	this->setTarget(instance._target);
}
*/
/*RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & instance) {
	(void) instance;
//	if (&instance != this) this->_name = instance._name;
//	this->_signed = instance._signed;
//	this->_sign_grade = instance._sign_grade;
//	this->_exec_grade = instance._exec_grade;
	return *this; 
}*/

void RobotomyRequestForm::beSigned(Bureaucrat & b) {
	if (b.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	this->setSigned(true);
	std::cout << "[RRF] level " << this->getSignGrade() << " signed by Bureaucrat " << b.getName() << " with level " << b.getGrade() << std::endl;
}

void RobotomyRequestForm::exec() const {
	std::cout << "Robotomy is making noise: zzzzzzzzzzzz" << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << "Success: [" << this->getTarget() << "] was robotomised" << std::endl;
	else 
		std::cout << "Failure: [" << this->getTarget() << "] was not robotomised" << std::endl;
}	


