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
#include "Form.h"

int main (void) {

	Bureaucrat Alexandre("Alexandre", 100);

	try {
		Form F1("F1", 200, 200);
		std::cout << F1 << std::endl; }
	catch(Form::GradeTooHighException & e) {
		std::cout << "Form not created: " << e.what() << std::endl; }
	catch(Form::GradeTooLowException & e) {
		std::cout << "Form not created: " << e.what() << std::endl; }

	std::cout << "-----------------------------" << std::endl;

	try {
		Form F2("F2", 0, 0);
		std::cout << F2 << std::endl; }
	catch(Form::GradeTooHighException & e) {
		std::cout << "Form not created: " << e.what() << std::endl; }
	catch(Form::GradeTooLowException & e) {
		std::cout << "Form not created: " << e.what() << std::endl; }

	std::cout << "-----------------------------" << std::endl;

	try	{
		Form F3("F3", 100, 100);
		std::cout << F3 << std::endl; }
	catch(Form::GradeTooHighException & e) {
		std::cout << "Form not created: " << e.what() << std::endl; }
	catch(Form::GradeTooLowException & e) {
		std::cout << "Form not created: " << e.what() << std::endl; }

	std::cout << "-----------------------------" << std::endl;

	try	{
		Form F4("F4", 50, 50);
		std::cout << F4 << std::endl;
		F4.beSigned(Alexandre);
		Alexandre.signForm(F4); }
	catch(Form::GradeTooLowException & e)	{
		std::cout << "Bureaucrat did not sign because: " << e.what() << std::endl; }

	std::cout << "-----------------------------" << std::endl;

	try	{
		Form F5("F5", 140, 140);
		std::cout << F5 << std::endl;
		F5.beSigned(Alexandre);
		std::cout << F5 << std::endl;
		Alexandre.signForm(F5); }
	catch(Form::GradeTooLowException & e)	{
		std::cout << "Bureaucrat did not sign because: " << e.what() << std::endl; }

	std::cout << "-----------------------------" << std::endl;

	return 0;
}
