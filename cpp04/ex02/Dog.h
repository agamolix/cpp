/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include <iostream>
# include <string>
# include "AAnimal.h"

class Dog : public AAnimal {

public:
	Dog(void);
	Dog(Dog const & instance);
	~Dog(void);
	Dog & operator=(Dog const & instance);
	void makeSound() const;
	void eat() const;
	void setType(std::string s);
	Brain * findBrain(); 

private:
	Brain* brain;

};

#endif
