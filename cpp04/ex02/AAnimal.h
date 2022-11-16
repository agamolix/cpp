/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_H
# define AAnimal_H

# include <iostream>
# include <string>
# include "Brain.h"

class AAnimal {

protected:
	std::string type;

public:
	AAnimal(void);
	AAnimal(AAnimal const & instance);
	virtual ~AAnimal(void);
	AAnimal & operator=(AAnimal const & instance);

	std::string getType() const;
	void setType(std::string);


	virtual void makeSound() const = 0;
	virtual void eat() const = 0;
	virtual Brain * findBrain();

private:
};

#endif
