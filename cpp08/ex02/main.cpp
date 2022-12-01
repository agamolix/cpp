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
#include "MutantStack.h"
#include <list>

int main (void) {

	MutantStack<int> m1;

	m1.push(1);
	m1.push(2);
	m1.push(3);
	std::cout << "top = " << m1.top() << std::endl;
	std::cout << "size = " << m1.size() << std::endl;
	m1.pop();
	std::cout << "top = " << m1.top() << std::endl;
	std::cout << "size = " << m1.size() << std::endl;
	std::cout << "stack is empty = " << std::boolalpha << m1.empty() << std::endl;

	std::cout << "==============================" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;

	std::cout << "------------------------------" << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << "begin: " << *it << std::endl;
	std::cout << "end: " << *ite << std::endl;

	++it;
	--it;

	while (it != ite)
	{
		std::cout << "value: " << *it << std::endl;
		++it;
	}

	std::cout << "==============================" << std::endl;

	std::list<int> li;
	li.push_back(5);
	li.push_back(17);
	std::cout << "top: " << *(--li.end()) << std::endl;
	li.pop_back();
	std::cout << "size: " << li.size() << std::endl;

	std::cout << "------------------------------" << std::endl;

	li.push_back(3);
	li.push_back(5);
	li.push_back(737);
	li.push_back(0);

// POURQUOI END MARCHE PAS??
	std::list<int>::iterator itl = li.begin();
	std::list<int>::iterator itle = li.end();

	std::cout << "begin: " << *itl << std::endl;
	std::cout << "end: " << *itle << std::endl;

	++itl;
	--itl;

	while (itl != itle)
	{
		std::cout << "value: " << *itl << std::endl;
		++itl;
	}

	std::cout << "==============================" << std::endl;

	MutantStack<int> m2;

	for (int i = 0; i < 5; i++)
		m2.push(i);

	MutantStack<int>::iterator itm2;

	for (itm2 = m2.begin(); itm2 != m2.end(); itm2++)
		std::cout << "value: " << *itm2 << std::endl;

	std::cout << "------------------------------" << std::endl;

	for (itm2 = m2.begin(); itm2 != m2.end(); itm2++)
		*itm2 *= 10;

	for (itm2 = m2.begin(); itm2 != m2.end(); itm2++)
		std::cout << "value: " << *itm2 << std::endl;

	std::cout << "------------------------------" << std::endl;



	return 0;
}
