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
#include "Fixed.h"

int main (void) {

	Fixed a;
	Fixed const b (10);
	a = Fixed (1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl << std::endl;

	Fixed c = a + b;
	std::cout << "a + b is " << c << std::endl;

	c = a - b;
	std::cout << "a - b is " << c << std::endl;

	c = a * b;
	std::cout << "a * b is " << c << std::endl;

	c = a / b;
	std::cout << "a / b is " << c << std::endl << std::endl;

	bool d = a > b;
	std::cout << "a > b is " << std::boolalpha << d << std::endl;

	d = a < b;
	std::cout << "a < b is " << std::boolalpha << d << std::endl;

	d = a >= b;
	std::cout << "a >= b is " << std::boolalpha << d << std::endl;

	d = a <= b;
	std::cout << "a <= b is " << std::boolalpha << d << std::endl;

	d = (a == b);
	std::cout << "a == b is " << std::boolalpha << d << std::endl;

	d = (a != b);
	std::cout << "a != b is " << std::boolalpha << d << std::endl << std::endl;

	Fixed f;
	std::cout << "f is 0" << std::endl;

	++f;
	std::cout << "++f is " << f << std::endl;

	f++;
	std::cout << "f++ is " << f << std::endl << std::endl;

	Fixed e;
	std::cout << "e is 0" << std::endl;

	--e;
	std::cout << "--e is " << e << std::endl;

	e--;
	std::cout << "e-- is " << e << std::endl << std::endl;

	Fixed f1 (1.1f);
	Fixed f2 (2.2f);
	std::cout << "f1 = " << f1.toFloat() << ", f2 = " << f2.toFloat() << "  ===> min (f1, f2) = "; 
	std::cout << Fixed::min(f1, f2) << "  ===> max (f1, f2) = " << Fixed::max(f1, f2) << std::endl;

	Fixed const f3 (3.3f);
	Fixed const f4 (4.4f);
	std::cout << "const f3 = " << f3.toFloat() << ", const f4 = " << f4.toFloat() << "  ===> min (f3, f4) = "; 
	std::cout << Fixed::min(f3, f4) << "  ===> max (f3, f4) = " << Fixed::max(f3, f4) << std::endl;

	std::cout << "\nSUJET:" << std::endl;
	Fixed A;
	Fixed const B( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << A << std::endl;
	std::cout << ++A << std::endl;
	std::cout << A << std::endl;	
	std::cout << A++ << std::endl;
	std::cout << A << std::endl;
	std::cout << B << std::endl;
	std::cout << Fixed::max( A, B ) << std::endl;

	return 0;
}
