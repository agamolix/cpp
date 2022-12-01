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
#include "Templates.h"


int main (void) {

	int aa = 1;
	int bb = 2;

	std::cout << "aa = " << aa << ", bb = " << bb << std::endl;
	swap<int> (aa, bb);
	std::cout << "aa = " << aa << ", bb = " << bb << std::endl;
	std::cout << "max = " << max<int> (aa, bb) << std::endl;
	std::cout << "min = " << min<int> (aa, bb) << std::endl;

	char cc = 'a';
	char dd = 'z';

	std::cout << "cc = " << cc << ", dd = " << dd << std::endl;
	swap<char> (cc, dd);
	std::cout << "cc = " << cc << ", dd = " << dd << std::endl;
	std::cout << "max = " << max<char> (cc, dd) << std::endl;
	std::cout << "min = " << min<char> (cc, dd) << std::endl;

	bool e = true;
	bool f = false;

	std::cout << "e = " << std::boolalpha << e << ", f = " << f << std::endl;
	swap<bool> (e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "max = " << max<bool> (e, f) << std::endl;
	std::cout << "min = " << min<bool> (e, f) << std::endl;

	std::cout << "--------------------------------" << std::endl;
	std::cout << "            SUBJECT             " << std::endl;
	std::cout << "--------------------------------" << std::endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}
