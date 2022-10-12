/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {

	public:
	Fixed(void);
	Fixed(const float);	

	Fixed(int const value);
	Fixed(Fixed const & instance);

	~Fixed(void);

	Fixed & operator=(Fixed const & instance);
	
	Fixed operator+(Fixed const & instance) const;
	Fixed operator-(Fixed const & instance) const;
	Fixed operator*(Fixed const & instance) const;
	Fixed operator/(Fixed const & instance) const;

	bool operator>(Fixed const & instance) const;
	bool operator<(Fixed const & instance) const;
	bool operator>=(Fixed const & instance) const;
	bool operator<=(Fixed const & instance) const;
	bool operator==(Fixed const & instance) const;
	bool operator!=(Fixed const & instance) const;

	Fixed & operator++(void);
	Fixed & operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	static float min(Fixed const & inst1, Fixed const & inst2);
	static float min(Fixed & inst1, Fixed & inst2);
	static float max(Fixed const & inst1, Fixed const & inst2);
	static float max(Fixed & inst1, Fixed & inst2);


	int getRawBits(void) const;
	void setRawBits(int const);
	float toFloat(void) const;
	int toInt(void) const;

	private:
	int _value;
	float _float;
	static int const _bits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & instance);

#endif