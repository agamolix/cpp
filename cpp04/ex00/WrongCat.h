/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include <iostream>
# include <string>
# include "WrongAnimal.h"

class WrongCat : public WrongAnimal {

public:
	WrongCat(void);
	WrongCat(WrongCat const & instance);
	~WrongCat(void);
	WrongCat & operator=(WrongCat const & instance);
	void makeSound() const;
};

#endif
