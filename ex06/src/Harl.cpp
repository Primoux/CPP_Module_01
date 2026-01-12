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

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]I love having extra bacon..." << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]I cannot believe adding extra bacon costs more money..." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]I think I deserve to have some extra bacon for free..." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
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
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}