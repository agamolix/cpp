/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/12/08 11:40:29 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon (std::string param)
{
	setType(param);
}

Weapon::~Weapon(void) {}

const std::string & Weapon::getType()
{
	const std::string & res = this->type;
	return (res);
}

void Weapon::setType(std::string param)
{
	this->type = param;
}
