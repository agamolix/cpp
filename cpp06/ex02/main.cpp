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

#include "A.h"
#include "B.h"
#include "C.h"
#include <cstdlib>
#include <time.h>
#include <iostream>

Base * generate(void) {
	srand(time(NULL));
	if (rand() % 3 == 0)
		return new A;
	if (rand() % 3 == 0)
		return new B;
	return new C;
}

void identify(Base * p) {
	A * a = dynamic_cast<A *>(p);
	B * b = dynamic_cast<B *>(p);
	C * c = dynamic_cast<C *>(p);
	if (a)
		std::cout << "Real type is A" << std::endl;
	else if (b)
		std::cout << "Real type is B" << std::endl;
	else
		std::cout << "Real type is C" << std::endl;
	(void) c;
}

void identify(Base& p) {
	A & a = dynamic_cast<A &>(p);
	(void) a;
}


int main (void) {

	Base * b = generate();

	identify(b);




	return 0;
}
