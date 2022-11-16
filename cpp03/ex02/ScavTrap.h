/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

# include "ClapTrap.h"

class ScavTrap : public ClapTrap {

	public:

	ScavTrap(void);
	ScavTrap(std::string);
	ScavTrap(ScavTrap const & instance);
	~ScavTrap(void);
	ScavTrap & operator=(ScavTrap const & instance);

	void attack(const std::string& target);
	void guardGate();

	private:

};

#endif
