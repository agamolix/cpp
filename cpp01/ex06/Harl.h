/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_H
# define Harl_H

# include <string>

class Harl
{
	private:
	void debug (void);
	void info(void);
	void warning(void);
	void error(void);
	void message_default(void);

	public:
	Harl();
	~Harl();
	void complain(std::string level);	
};

#endif
