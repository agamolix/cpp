/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_H
# define TEMPLATES_H

template<typename T>
void swap(T & a, T & b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
T & min(T & a, T & b)
{
	if (a < b)
		return a;
	return b;
}

template<typename T>
T & max(T & a, T & b)
{
	if (a > b)
		return a;
	return b;
}

#endif