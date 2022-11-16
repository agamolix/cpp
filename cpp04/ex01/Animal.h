/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>
# include "Brain.h"

class Animal {

protected:
	std::string type;

public:
	Animal(void);
	Animal(Animal const & instance);
	virtual ~Animal(void);
	Animal & operator=(Animal const & instance);

	std::string getType() const;
	void setType(std::string);


	virtual void makeSound() const;
	virtual void eat() const;
	virtual Brain * findBrain();
private:

};

#endif
