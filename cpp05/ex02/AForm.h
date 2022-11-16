/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include <string>
# include <stdexcept>
# include <iostream>
# include <cstdlib>


# include "Bureaucrat.h"

class Bureaucrat;
class AForm {

public:
	AForm(void);
	AForm(std::string n, int sg, int eg);
	virtual ~AForm(void);
	AForm(AForm const & instance);
	AForm & operator=(AForm const & instance);
	std::string getName() const;
	
	bool getSigned() const; 
	int getSignGrade() const; 
	int getExecGrade() const; 
	std::string getTarget() const; 

	void setTarget(std::string);
	void setSigned(bool);
	void setSignGrade(int);
	void setExecGrade(int);
	void beSigned(Bureaucrat &);
	void execute(Bureaucrat const & executor) const; 
	virtual void exec() const = 0;

	class GradeTooLowException : public std::exception {
	public:
		const char * what() const throw();
	};
	class GradeTooHighException : public std::exception {
	public:
		const char * what() const throw();
	};
	class FormNotSignedException : public std::exception {
	public:
		const char * what() const throw();
	};


private:
	std::string const _name;
	std::string _target;
	bool _signed;
	int const _sign_grade;
	int const _exec_grade;
	

};

std::ostream & operator<<(std::ostream & os, AForm const & instance); 

#endif