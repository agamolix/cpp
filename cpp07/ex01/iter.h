/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

template<typename T>
void iter(T * tab, int size, void (*display)(T &)) {
	for (int i = 0; i < size; i++)
		display(tab[i]);
}

template<typename T>
void display(T & element) {
	std::cout << "Element is: " << element << std::endl;
}

#endif