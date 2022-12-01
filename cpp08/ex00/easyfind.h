/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <vector>

template<typename T>
int easyfind(T & t, int i)
{
	typename T::const_iterator it1 = t.begin();
	typename T::const_iterator it2 = t.end();
	int res = 0;

	for(it1 = it1; it1 != it2; it1++)
	{
		if (* it1 == i)
			return res;
		res++; 
	}
	return res;
};



#endif