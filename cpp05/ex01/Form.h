/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <string>
# include <stdexcept>
# include <iostream>

# include "Bureaucrat.h"


class Bureaucrat;
class Form {

public:
	Form(void);
	Form(std::string n, int sg, int eg);
	~Form(void);
	Form(Form const & instance);
	Form & operator=(Form const & instance);
	std::string getName() const;
	
	bool getSigned() const; 
	int getSignGrade() const; 
	int getExecGrade() const; 

	void beSigned(Bureaucrat &);

	class GradeTooLowException : public std::exception {
	public:
		const char * what() const throw();
	};
	class GradeTooHighException : public std::exception {
	public:
		const char * what() const throw();
	};


private:
	std::string const _name;
	bool _signed;
	int const _sign_grade;
	int const _exec_grade;

};

std::ostream & operator<<(std::ostream & os, Form const & instance); 

#endif