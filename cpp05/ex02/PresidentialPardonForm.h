/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "AForm.h"

class Bureaucrat;
class PresidentialPardonForm : public AForm {

public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string n);
	~PresidentialPardonForm(void);
	PresidentialPardonForm(AForm const & instance);
	PresidentialPardonForm & operator=(AForm const & instance);
	
	void beSigned(Bureaucrat &);
	void exec() const;

private:
};


#endif