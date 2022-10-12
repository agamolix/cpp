/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <fstream>
# include <stdlib.h>

void exit_error(std::string str)
{
	std::cout << str << std::endl;
	exit(EXIT_FAILURE);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		exit_error ("Usage: filename s1 s2");

	std::string file_in = argv[1];
	const char *file_in_c = file_in.c_str();
	std::ifstream flux_in(file_in_c);
	if (!flux_in)
		exit_error ("Error opening input file");

	std::string file_out = file_in + ".replace";
	const char *file_out_c = file_out.c_str();
	std::ofstream flux_out(file_out_c, std::ios::trunc);
	if (!flux_out)
		exit_error ("Error opening or creating output file");

	char *s1 = argv[2];
	char *s2 = argv[3];
	std::string s1_s = s1;

	std::string res;
	std::string line;

	while (getline(flux_in, line))
	{
		int i = line.find(s1_s);
		while (i >= 0)
		{
			res.append(line, 0, i);
			res.append(s2);
			line = line.substr(i + s1_s.length());
			i = line.find(s1_s);
		}
		res.append(line);
		std::cout << "Res = " << res << std::endl;	
		flux_out << res << std::endl;
		res.erase();
	}
	return 0;	
}