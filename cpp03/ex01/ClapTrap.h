/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

# include <iostream>
# include <string>


class ClapTrap {

	public:

	ClapTrap(void);
	ClapTrap(std::string);
	ClapTrap(ClapTrap const & instance);
	~ClapTrap(void);
	ClapTrap & operator=(ClapTrap const & instance);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	protected:

	std::string _name;
	int _hitpoints;
	int _energypoints;
	int _attackdamage;
};

#endif
