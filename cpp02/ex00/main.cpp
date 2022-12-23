/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/12/08 13:03:22 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.h"

int main (void) {

	Fixed a;
	std::cout << "------------------------------------------" << std::endl;
	Fixed b (a);
	std::cout << "------------------------------------------" << std::endl;
	Fixed c;
	std::cout << "------------------------------------------" << std::endl;
	c = b;
	std::cout << "------------------------------------------" << std::endl;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "------------------------------------------" << std::endl;

	return 0;
}
