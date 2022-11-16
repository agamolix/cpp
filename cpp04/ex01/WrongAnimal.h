/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>
# include <string>

class WrongAnimal {

protected:
	std::string type;

public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const & instance);
	virtual ~WrongAnimal(void);
	WrongAnimal & operator=(WrongAnimal const & instance);

	std::string getType() const;

	void makeSound() const;

private:

};

#endif
