/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Type.h"

Type::Type(void) : _type('n'), _error("") {
//	std::cout << "Type created" << std::endl;
}

Type::~Type(void) {
//	std::cout << "Type destroyed" << std::endl;
}

Type::Type(Type const & instance) {
	*this = instance;
}

Type & Type::operator=(Type const & instance) {
	this->_type = instance._type;
	this->_error = instance._error;
	return *this; 
}

void Type::setType(char c) {
	this->_type = c;
}

void Type::setError(std::string s) {
	this->_error = s;
}

char Type::getType(void) {
	return this->_type;
}

std::string Type::getError(void) {
	return this->_error;
}

void Type::type_num(std::string s)
{
	int i = 0;
	if (s[i] == '-')
		i++;
		
	int count = 0;
	while (isdigit(s[i]) || s[i] == '.')
	{
		if (s[i] == '.')
			count++;
		if (count > 1)
		{
			this->setType('n');
			this->setError("too many dots");
			return;
		}
		i++;
	}
	if (!s[i])
	{
		if (count == 0)
		{
			this->setType('i');
			return;
		}
		if (s[i - 1] != '.')
		{
			this->setType('d');
			return;
		}
		this->setType('n');
		this->setError("'xxx.' is not a correct double");
		return;
	}
	if (s[i] == 'f')
	{
		if (s[i - 1] == '.')
		{
			this->setType('n');
			this->setError("'xxx.f' is not a correct float");
			return;
		}
		if (!s[i + 1])
		{
			this->setType('f');
			return;
		}
	}
	this->setType('n');
	this->setError("input is not a correct number");
	return;
}

void Type::type_spec(std::string s)
{
	if (s == "-inff" || s == "+inff" || s == "nanf")
		this->setType('F');
	else
		this->setType('D');
	return;
}

void Type::type(std::string s)
{
	std::string tab[] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	for(int ind = 0; ind < 6; ind++)
	{
		if (s == tab[ind])
		{
			this->type_spec(s);
			return;
		}
	}
	if (isdigit(s[0]) || s[0] == '-' || s[0] == '.')
	{
		this->type_num(s);
		return;
	}
	if (s.length() == 1)
	{
		this->setType('c');
		return;
	}
	this->setType('n');
}


void Type::print_char(double d)
{
	int i = static_cast<int>(d);

	if (d - i != 0 || i < 0 || i > 127)
	{
		std::cout << "char: impossible to convert to char" << std::endl;
		return;
	}
	if (i < 32 || i > 126)
	{
		std::cout << "char: impossible to display char" << std::endl;
		return;
	}
	std::cout << "char: " << static_cast<char>(i) << std::endl;
}

void Type::print_int(double d)
{
	if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max())	
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	else
		std::cout << "int: impossible to convert to int" << std::endl;
}

bool Type::can_be_float(double d)
{
	if (d >= std::numeric_limits<float>::min() && d <= std::numeric_limits<float>::max())	
		return true;
	return false;
}

void Type::print(std::string s, char * s2)
{
	if (this->_type == 'F')
	{
		std::cout << "char: impossible to convert" << std::endl;
		std::cout << "int: impossible to convert" << std::endl;
		std::cout << "float: " << s << std::endl;
		std::cout << "double: " << s.erase(s.length() - 1) << std::endl;
	}
	if (this->_type == 'D')
	{
		std::cout << "char: impossible to convert" << std::endl;
		std::cout << "int: impossible to convert" << std::endl;
		std::cout << "float: " << s << "f" << std::endl;
		std::cout << "double: " << s << std::endl;
	}
	if (this->_type == 'c')
	{
		std::cout << "char: " << s << std::endl;
		std::cout << "int: " << static_cast<int>(s[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(s[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(s[0]) << ".0" << std::endl;
	}
	if (this->_type == 'i')
	{
		double d = atof(s2);
		print_char(d);
		print_int(d);
		std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(2) << d << std::endl;
	}
	if (this->_type == 'f')
	{
		double d = atof(s2);
		if (!can_be_float(d))
		{
			std::cout << "error: this number cannot be a float" << std::endl;
			return;
		}
		print_char(d);
		print_int(d);
		std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(2) << d << std::endl;
	}
	if (this->_type == 'd')
	{
		double d = atof(s2);
		print_char(d);
		print_int(d);
		std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(2) << d << std::endl;
	}
	if (this->_type == 'n')
	{
		if (this->getError() == "")
			std::cout << "Error: wrong input! Enter {char, int, float or double}" << std::endl;
		else
			std::cout << "Error: " << this->getError() << std::endl;
	}
}