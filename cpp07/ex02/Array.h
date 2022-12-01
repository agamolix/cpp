/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

template<typename T>
class Array {

	public:

	Array(void) {
		this->_sizeArray = 0;
		this->_array = 0;
		std::cout << "Default construction" << std::endl;
	}

	Array(int n) : _sizeArray(n) {
		this->_sizeArray = n;
		this->_array = new T[n];
		std::cout << "Standard construction" << std::endl;
	}

	~Array(void) {
		if (this->_array)
			delete [] this->_array;
		std::cout << "Destruction" << std::endl;
	}

	Array (Array const & instance) {
		std::cout << "Copy construction" << std::endl;
		*this = instance;
	}

	Array & operator=(Array const & instance) {
		if (this->_array)
			delete [] this->_array;
		this->_array = new T[instance.size()];
		this->_sizeArray = instance.size();
		if (this->_sizeArray)
		{
			for (int i = 0; i < this->_sizeArray; i++)
				this->_array[i] = instance._array[i];
		}
		std::cout << "Operator = construction" << std::endl;
		return *this;
	}

	T & operator[](int n) {
		if (n < 0 || n >= this->_sizeArray)
			throw std::exception();
		return this->_array[n];
	}

	int size() const{
		return this->_sizeArray;
	}

	private:
	int _sizeArray;
	T * _array;

};

#endif