/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include <string>
# include <iostream>
# include "ShrubberyCreationForm.h"
# include "RobotomyRequestForm.h"
# include "PresidentialPardonForm.h"

class Intern {

public:
	Intern(void);
	Intern(std::string, int);
	~Intern(void);
	Intern(Intern const & instance);
	Intern & operator=(Intern const & instance);

	AForm * makeForm(std::string, std::string);

private:
	typedef struct s_list
	{
		std::string name;
		AForm 	*type;
	}		t_list;
};

#endif