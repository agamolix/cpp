/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <vector>
# include <iostream>
# include <exception>
# include <algorithm>
# include <numeric>

class Span
{
	private:
	unsigned int _size;
	std::vector<int> _tab;

	public:
	Span(unsigned int);
	~Span();
	Span(Span const &);
	Span & operator=(Span const &);

	std::vector<int> getTab();

	void addNumber(int);
	int longestSpan();
	int shortestSpan();

	class ExceptionFull : public std::exception {
		const char * what() const throw();
	};

	class ExceptionNotEnoughNb : public std::exception {
		const char * what() const throw();
	};

	void fillIteratorRange(std::vector<int>::iterator, std::vector<int>::iterator);
	void fillAlea(unsigned int n);



};



#endif