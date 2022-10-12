/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/04/22 17:21:43 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class Contact;

class PhoneBook
{
public:

	PhoneBook(void);
	~PhoneBook(void);

	int get_nb_entries(void) const;
	std::string get_first_name(int i) const;
	std::string get_last_name(int i) const;
	std::string get_nickname(int i) const;
	std::string get_phone_number(int i) const;
	std::string get_darkest_secret(int i) const;
	
	void add_to_phonebook(Contact &inst_contact);
	void display_lines(void);
	void display_contact(int index_search);

private:

	static int _nb_entries;
	int _index[8];
	std::string _first_name[8];
	std::string _last_name[8];
	std::string _nickname[8];
	std::string _phone_number[8];
	std::string _darkest_secret[8];

	std::string truncate(std::string str);

};

#endif
