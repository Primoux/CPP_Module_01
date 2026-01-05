/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:00:00 by enzo              #+#    #+#             */
/*   Updated: 2026/01/05 17:57:16 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "iostream"

int	main(void)
{
	std::cout << "---------------------------------------" << std::endl;
	int size = 1;
	Zombie *horde = zombieHorde(size, "Enzo");
	for (int i = 0; i < size;++i)
	{
		horde[i].setId(i);
		if (i % 2 == 0)
			horde[i].setName("Fabouch");
		horde[i].annonce();
	}
	std::cout << "---------------------------------------" << std::endl;
	delete[] horde;
	std::cout << "---------------------------------------" << std::endl;
	return (0);
}
