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
#include "iter.h"

int main (void) {

	int tab1[] = {1, 2, 3, 4, 5};
	char tab2[] = {'a', 'b', 'c', 'd', 'e'};
	std::string tab3[] = {"le", "petit", "chat", "se", "promene"};
	
	iter(tab1, 5, display);
	std::cout << "--------------------------------" <<	std::endl;
	iter(tab2, 5, display);
	std::cout << "--------------------------------" <<	std::endl;
	iter(tab3, 5, display);

	return 0;
}
