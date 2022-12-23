/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/12/07 16:30:22 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.h" 

class PhoneBook
{
public:

	PhoneBook(void);
	~PhoneBook(void);

	int get_nb_entries(void) const;
	
	void add_to_phonebook(void);
	void display_lines(void);
	void display_contact(int index_search);

private:

	static int _nb_entries;
	Contact _contact[8];

	std::string truncate(std::string str);

};

#endif
