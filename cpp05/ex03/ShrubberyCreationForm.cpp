/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery", 145, 137) {
	this->setTarget("no target");
	if (verbose)
		std::cout << "[SCF] created with name " << this->getName() << ", target = no target, signed = false and grades (145, 137)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t) : AForm("Shruberry", 145, 137) {
	this->setTarget(t);
	if (verbose)
		std::cout << "[SCF] created with name " << this->getName() << ", target = " << t << ", signed = false and grades (" << this->getSignGrade() << " " << this->getExecGrade() << ")" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	if (verbose)
		std::cout << "[SCF] " << this->getName() << " destroyed" << std::endl;
}

/*ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const 
& instance) : AForm(instance._name, instance._sign_grade, instance._exec_grade) {
	this->setTarget(instance._target);
}*/

/*ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & instance) {
	(void) instance;
//	if (&instance != this) this->_name = instance._name;
//	this->_signed = instance._signed;
//	this->_sign_grade = instance._sign_grade;
//	this->_exec_grade = instance._exec_grade;
	return *this; 
}*/

void ShrubberyCreationForm::beSigned(Bureaucrat & b) {
	if (b.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	this->setSigned(true);
	std::cout << "[SCF] level " << this->getSignGrade() << " signed by Bureaucrat " << b.getName() << " with level " << b.getGrade() << std::endl;
}

void ShrubberyCreationForm::exec() const {
	std::string s1 = this->getTarget() + "_shrubbery";
	const char * s2 = s1.c_str(); 
	std::ofstream myfile(s2);
	myfile << "\n\n\n" <<
"                           %   #  ,/  %/\n" 
"                      %    (   # %    &  %#\n"
"             %%     #(&     #% #&      %%\n"
"                #(     @    %   & ##   @ # &   %  /\n"
"              %. #      .%  & % %     @%#       %@@#\n"
"                . @ % %   @ &    %  @,    (@(\n"
"             @    &   %    @    @&    %@ *,,.  && @&\n"
"               @    @&( &  &%  @.%  .%&        @.\n"
"           /*     &        & @ @@  ,@@@%@@@@( @@ .@@\n"
"      ,@,  @,     @   @     @&@@ @@&&     @@.   &@\n"
"           @   &     /@@@@    @@@@     @&\n"
"         (  #   &&@    @    .@@@       # @\n"
"             / @    & &*     @@@\n"
"                             @@&\n"
"                            .@@@\n"
"                            ,@@@\n"
"                             @@@@\n"
"                           .@@@@@\n";
	myfile.close();
}	

