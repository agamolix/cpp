/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
	MutantStack() { std::cout << "Default contructor" << std::endl; }
	~MutantStack() { std::cout << "Destructor" << std::endl; }
	MutantStack<T>(MutantStack<T> const & instance) {
		*this = instance; }
	MutantStack<T> & operator=(MutantStack<T> const & instance) { 
		(void) instance;
		return *this; }

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
};



#endif