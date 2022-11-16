/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"
#include <iostream>
#include <string>

Brain::Brain(void) {
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(Brain const & instance) {
	*this = instance;
	std::cout << "Brain created by copy" << std::endl;
}

Brain::~Brain(void) {
	std::cout << "Brain destroyed" << std::endl;
}

Brain & Brain::operator=(Brain const & instance) {
	int i;
	while(i < 100)
	{
		this->ideas[i] = instance.ideas[i];
		i++;
	}
	std::cout << "Brain created by operator =" << std::endl;
	return *this;
}
