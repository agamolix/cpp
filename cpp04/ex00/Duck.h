/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Duck.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUCK_H
# define DUCK_H

# include <iostream>
# include <string>
# include "Animal.h"

class Duck : public Animal {

public:
	Duck(void);
	Duck(Duck const & instance);
	~Duck(void);
	Duck & operator=(Duck const & instance);
	void makeSound() const;
	void eat() const;

};

#endif
