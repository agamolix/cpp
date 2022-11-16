/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "AForm.h"

class Bureaucrat;
class RobotomyRequestForm : public AForm {

public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string n);
	~RobotomyRequestForm(void);
	RobotomyRequestForm(AForm const & instance);
	RobotomyRequestForm & operator=(AForm const & instance);
	
	void beSigned(Bureaucrat &);
	void exec() const;

private:
};


#endif