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
#include "Span.h"


int main (void) {

	std::cout << "-------------------------------" << std::endl;	
	std::cout << "-          SPAN 1             -" << std::endl;	
	std::cout << "-------------------------------" << std::endl;	

	Span sp1 = Span(3);
	try
	{
		sp1.addNumber(6);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-------------------------------" << std::endl;	
	std::cout << "-          SPAN 2             -" << std::endl;	
	std::cout << "-------------------------------" << std::endl;	

	Span sp2 = Span(5);
	try
	{
		sp2.addNumber(6);
		std::cout << "Shortest span is:" << std::endl;
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span is:" << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-------------------------------" << std::endl;	
	std::cout << "-          SPAN 3             -" << std::endl;	
	std::cout << "-------------------------------" << std::endl;	

	Span sp3 = Span(5);
	try
	{
		sp3.addNumber(6);
		sp3.addNumber(3);
		sp3.addNumber(17);
		sp3.addNumber(9);
		sp3.addNumber(11);
		std::cout << "Shortest span is:" << std::endl;
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << "Longest span is:" << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-------------------------------" << std::endl;	

//TROP BIZARRE IT1 MARCHE PAS
	std::vector<int> tabsp3 = sp3.getTab();
	std::vector<int>::iterator it1 = sp3.getTab().begin();
	std::vector<int>::iterator it3 = tabsp3.begin();
	std::vector<int>::iterator it2 = sp3.getTab().end();
	std::cout << "sp3 begin = " << *(it1) << std::endl;
	std::cout << "sp3 begin = " << *(it3) << std::endl;
	std::cout << "sp3 begin = " << *(sp3.getTab().begin()) << std::endl;
	std::cout << "sp3 end = " << *(it2 - 1) << std::endl;
	std::cout << "sp3 end = " << *(sp3.getTab().end() - 1) << std::endl;

	std::cout << "-------------------------------" << std::endl;	
	std::cout << "-             V1              -" << std::endl;	
	std::cout << "-------------------------------" << std::endl;	

	std::vector<int> v1(5);
	std::cout << "size v1 = " << v1.size() << std::endl;;
	v1.clear();
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	std::vector<int>::iterator it;
	for (it = v1.begin(); it != v1.end(); it++)
		std::cout << *it << std::endl;


	std::cout << "-------------------------------" << std::endl;	
	std::cout << "-          SPAN 4             -" << std::endl;	
	std::cout << "-------------------------------" << std::endl;	

	Span sp4 = Span(5);
	sp4.fillIteratorRange(v1.begin(), v1.end());
	std::cout << "-------------------------------" << std::endl;

// ????????????????????????????
	for (it = sp4.getTab().begin(); it != sp4.getTab().end(); it++)
		std::cout << "sp4.getTab(): " << *(it) << std::endl;

	std::vector<int> tab = sp4.getTab();
	for (it = tab.begin(); it != tab.end(); it++)
		std::cout << "tab: " << *(it) << std::endl;

	std::cout << "-------------------------------" << std::endl;	
	std::cout << "-          SPAN 5             -" << std::endl;	
	std::cout << "-------------------------------" << std::endl;	
	
	Span sp5 = Span(5);
	sp5.fillAlea(10);
	tab = sp5.getTab();
	for (it = tab.begin(); it != tab.end(); it++)
		std::cout << "tab: " << *(it) << std::endl;

	try
	{	
		std::cout << "Shortest span is: " << std::endl;
		std::cout << sp5.shortestSpan() << std::endl;
		std::cout << "Longest span is: " << std::endl;
		std::cout << sp5.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------------" << std::endl;	

	return 0;
}
