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
#include "easyfind.h"
#include <vector>

template<typename T>
void display(T t, int i)
{
	if (easyfind(t, i) == static_cast<int>(t.size()))
		std::cout << "Search " << i << ": not found" << std::endl;
	else
		std::cout << "Search " << i << ": index " << easyfind(t, i) << std::endl;
}

int main (void) {

	std::vector<int> v;
	for(int i = 0; i < 10; i++)
		v.push_back(10 - i);

	for (int i = 0; i < static_cast<int>(v.size()); i++)
		std::cout << "v[" << i << "] = " << v[i] << std::endl;

	display(v, 8);
	display(v, 3);
	display(v, 12);

	return 0;
}
