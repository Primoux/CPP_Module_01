/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 21:47:48 by enchevri          #+#    #+#             */
/*   Updated: 2025/12/20 22:24:49 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

using std::endl;
using std::string;

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]\nI love having extra bacon..." << endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money..." << endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free..." << endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(string level)
{
	string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int i;
	for (i = 0; i < 4; ++i)
	{
		if (level == levels[i])
			break ;
	}
	switch (i)
	{
		case 0:
			debug();
			/* FALLTHRU */
		case 1:
			info();
			/* FALLTHRU */
		case 2:
			warning();
			/* FALLTHRU */
		case 3:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << endl;
	}
}
