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

#include "Serial.h"
#include <iostream>

uintptr_t serialize(Data* ptr) {
	uintptr_t res = reinterpret_cast<uintptr_t>(ptr);
	return res;
}

Data* deserialize(uintptr_t raw) {
	Data * res = reinterpret_cast<Data *>(raw);
	return res;
}

int main (void) {

	Data d;
	Data * ptr1 = &d;

	ptr1->i = 10;
	ptr1->s = "abc";

	std::cout << " i = " << ptr1->i << std::endl;
	std::cout << " s = " << ptr1->s << std::endl;

	std::cout << "--------- Serialize ptr1 --------" << std::endl;
	uintptr_t address = serialize(ptr1);
	std::cout << " address = " << address << std::endl;
	
	std::cout << "--------- Deserialize -----------" << std::endl;
	Data * ptr2 = deserialize(address);
	std::cout << " i = " << ptr2->i << std::endl;
	std::cout << " s = " << ptr2->s << std::endl;


	std::cout << "--------- New values ------------" << std::endl;
	ptr1->i = 20;
	ptr1->s = "def";

	std::cout << " i = " << ptr2->i << std::endl;
	std::cout << " s = " << ptr2->s << std::endl;

	return 0;
}
