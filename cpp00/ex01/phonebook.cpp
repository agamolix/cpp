/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>
#include <string>
#include "PhoneBook.class.h"
#include "Contact.class.h"
#include <string>
#include <iomanip>
#include <stdlib.h>

int check_index(std::string index, int entries)
{
	if (index.length() > 1)
		return 10;
	if (index[0] >= '0' && index[0] <= entries + '0' - 1)
		return (index[0] - '0');
	return 10;
}

int main(void)
{
	Contact inst_contact;
	PhoneBook inst_phonebook;

	while(1)
	{
		std::cout << "Enter a command: ADD, SEARCH or EXIT: ";  
		std::string command;
		std::cin >> command;
		if (command.compare("ADD") == 0)
		{
			inst_contact.add_contact();
			inst_phonebook.add_to_phonebook(inst_contact);
		}
		else if (command.compare("SEARCH") == 0)
		{
			if (inst_phonebook.get_nb_entries() == 0)
				std::cout << "No line to be displayed" << std::endl;
			else
			{
				inst_phonebook.display_lines();
				std::cout << "Enter index number (0 to " << inst_phonebook.get_nb_entries() - 1 << "): ";
				std::string index;
				std::cin >> index;
				int search_index = check_index(index, inst_phonebook.get_nb_entries());
				if (search_index == 10)
					std::cout << "Incorrect index number!" << std::endl;
				else 
					inst_phonebook.display_contact(search_index);
			}		
		}
		else if (command.compare("EXIT") == 0)
		{
			std::cout << "********************************************" << std::endl;
			std::cout << "Exit phonebook" << std::endl;  
			std::cout << "********************************************" << std::endl;
			return(0);
		}
		else
		{
			std::cout << "********************************************" << std::endl;
			std::cout << "Invalid command" << std::endl;  
			std::cout << "********************************************" << std::endl;
		}
	}
	return 0;	
}