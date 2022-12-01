/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.h"
#include <string>

int main (void) {

	Array<int> a(5);
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;

	std::cout << "Size of a is " << a.size() << std::endl;
	for (int i = 0; i < a.size(); i++)
		std::cout << "Content of a[" << i << "] is " << a[i] << std::endl; 	

	std::cout << "--------------------------------" << std::endl; 	

	Array<int> b;
	b = a;
	b[0] = 10;
	std::cout << "Content of b[0] is " << b[0] << std::endl; 	
	std::cout << "Content of a[0] is " << a[0] << std::endl; 	

	std::cout << "--------------------------------" << std::endl; 	

	Array<std::string> c(5);
	c[0] = "Le";
	c[1] = "petit";
	c[2] = "chat";
	c[3] = "se";
	c[4] = "promene";

	std::cout << "Size of c is " << c.size() << std::endl;
	for (int i = 0; i < c.size(); i++)
		std::cout << "Content of c[" << i << "] is " << c[i] << std::endl; 	

	std::cout << "--------------------------------" << std::endl; 	

	try {
		std::cout << c[10] << std::endl; 	
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "--------------------------------" << std::endl; 	
	return 0;
}
