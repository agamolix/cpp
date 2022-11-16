/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "AForm.h"

class Bureaucrat;
class ShrubberyCreationForm : public AForm {

public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string n);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm(AForm const & instance);
	ShrubberyCreationForm & operator=(AForm const & instance);
	
	void beSigned(Bureaucrat &);
	void exec() const; 

private:

};


#endif