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

#include "Type.h"

int main (int argc, char ** argv) {

	if (argc != 2) 
	{
		std::cout << "usage: char ('c') OR int (10) OR float (3.0f) OR double (2.0)" << std::endl;
		return 0;
	}

	std::string s = argv[1];
	char * s2 = argv[1];

	Type t;
	t.type(s);
	t.print(s, s2);

	return 0;
}
