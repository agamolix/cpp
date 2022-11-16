/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <iostream>
# include <string>
# include "Animal.h"

class Cat : public Animal {

public:
	Cat(void);
	Cat(Cat const & instance);
	~Cat(void);
	Cat & operator=(Cat const & instance);
	void makeSound() const;
	void eat() const;
	void setType(std::string s);
	Brain * findBrain(); 

private:
	Brain* brain;
};

#endif
