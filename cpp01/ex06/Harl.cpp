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

#include "Harl.h"
#include <iostream>

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug()
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}
void Harl::info()
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}
void Harl::warning()
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl; 
}
void Harl::error()
{
	std::cout << "[ ERROR ]\nThis is unacceptable ! I want to speak to the manager now." << std::endl;
}
void Harl::message_default()
{
	std::cout << "[ NO COMMENT ]\nI can't hear you, sorry Harl" << std::endl;
}

void Harl::complain(std::string level)
{
	std::string tab_s [] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while(i < 4)
	{
		if (tab_s[i] == level)
		{
			switch (i)
			{
				case (0):
					Harl::debug();
					Harl::info();
					Harl::warning();
					Harl::error();
					break;
				case (1):
					Harl::info();
					Harl::warning();
					Harl::error();
					break;
				case (2):
					Harl::warning();
					Harl::error();
					break;
				case (3):
					Harl::error();
					break;
			}
			return; 
		}
		i++;
	}
	Harl:: message_default();


}
