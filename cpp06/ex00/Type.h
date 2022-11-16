/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_H
# define TYPE_H

#include <iostream>
#include <stdlib.h>
#include <limits>
#include <iomanip>

class Type {

public:
	Type(void);
	~Type(void);
	Type(Type const & instance);
	Type & operator=(Type const & instance);

	void setType(char);
	void setError(std::string);
	char getType(void);
	std::string getError(void);

	void type(std::string);
	void print(std::string, char *);

private:
	char _type;
	std::string _error;

	void type_num(std::string);
	void type_spec(std::string);
	void print_char(double);
	void print_int(double);
	bool can_be_float(double);

};

#endif