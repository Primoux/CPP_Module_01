/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 18:18:17 by enchevri          #+#    #+#             */
/*   Updated: 2025/12/20 21:25:46 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of str:\t\t" << &str << std::endl;
	std::cout << "Address of stringPTR:\t" << stringPTR << std::endl;
	std::cout << "Address of stringREF:\t" << &stringREF << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "Address of str:\t\t" << str << std::endl;
	std::cout << "Address of stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "Address of stringREF:\t" << stringREF << std::endl;
	return (0);
}
