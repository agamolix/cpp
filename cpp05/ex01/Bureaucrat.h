/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <string>
# include <stdexcept>
# include <iostream>

# include "Form.h"

class Form;
class Bureaucrat {

public:
	Bureaucrat(void);
	Bureaucrat(std::string, int);
	~Bureaucrat(void);
	Bureaucrat(Bureaucrat const & instance);
	Bureaucrat & operator=(Bureaucrat const & instance);
	std::string getName() const;
	int getGrade() const; 

	class GradeTooLowException : public std::exception {
	public:
		const char * what() const throw();
	};
	class GradeTooHighException : public std::exception {
	public:
		const char * what() const throw();
	};

	void increment(void);
	void decrement(void);

	void signForm(Form &);

private:
	std::string _name;
	int _grade;

};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & instance); 

#endif