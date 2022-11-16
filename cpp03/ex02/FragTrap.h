/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

# include "ClapTrap.h"

class FragTrap : public ClapTrap {

	public:

	FragTrap(void);
	FragTrap(std::string);
	FragTrap(FragTrap const & instance);
	~FragTrap(void);
	FragTrap & operator=(FragTrap const & instance);

	void attack(const std::string& target);
	void highFivesGuys(void);
	
	private:

};

#endif
