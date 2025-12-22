/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 21:33:51 by enchevri          #+#    #+#             */
/*   Updated: 2025/12/22 20:48:54 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <cstring>
#include <fstream>
#include <iostream>
#include <ostream>
#include <sstream>
#include <string>

int	main(int ac, char **av)
{

	if (ac != 4)
	{
		std::cout << "./sed <filename> <s1> <s2> " << std::endl;
		return (2);
	}
	if (!av[1][0] || !av[2][0])
		return (1);
	std::ifstream infile(av[1]);
	if (!infile.is_open())
	{
		std::cout << "Can't open the infile <" << av[1] << ">" << std::endl;
		return (1);
	}
	std::string str(av[1]);
	str += ".replace";
	std::ofstream outfile(str.c_str());
	if (!outfile.is_open())
	{
		std::cout << "Can't open the outfile <" << str << ">" << std::endl;
		return (1);
	}
	std::stringstream ss;
	ss << infile.rdbuf();
	size_t	len = strlen(av[2]);
	size_t	i = 0;
	size_t	prev_i = 0;
	const std::string stroup = ss.str();
	while (1)
	{
		i = stroup.find(av[2], prev_i);
		outfile << stroup.substr(prev_i, i - prev_i);
		if (i != std::string::npos)
		{
			outfile << av[3];
			prev_i = i + len;
		}
		else
			break;
	}
}
