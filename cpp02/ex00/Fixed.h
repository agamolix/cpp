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

class Fixed {

	public:
	Fixed(void);
	Fixed(int const value);
	Fixed(Fixed const & instance);

	~Fixed(void);

	Fixed & operator=(Fixed const & instance);

	int getRawBits(void) const;
	void setRawBits(int const);

	private:
	int _integer;
	static int const _bits = 8;
};

#endif