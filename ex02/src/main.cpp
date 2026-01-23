/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 18:18:17 by enchevri          #+#    #+#             */
/*   Updated: 2026/01/23 12:19:19 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <string>

using std::endl;

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of str:\t\t" << &str << endl;
	std::cout << "Address of stringPTR:\t" << stringPTR << endl;
	std::cout << "Address of stringREF:\t" << &stringREF << endl;
	std::cout << "----------------------------------------" << endl;
	std::cout << "Address of str:\t\t" << str << endl;
	std::cout << "Address of stringPTR:\t" << *stringPTR << endl;
	std::cout << "Address of stringREF:\t" << stringREF << endl;
	return (0);
}
