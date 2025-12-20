/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:00:00 by enzo              #+#    #+#             */
/*   Updated: 2025/12/20 16:39:15 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "iostream"


int	main(void)
{
	int size = 10;
	Zombie *horde = zombieHorde(size, "Enzo");
	for (int i = 0; i < size;i++)
	{
		std::cout << i << " ";
		if (i % 2 == 0)
			horde[i].setName("Fabouch");
		horde[i].annonce();
	}
	return (0);
}
