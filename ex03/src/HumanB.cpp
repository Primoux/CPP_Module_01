/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:30:27 by enchevri          #+#    #+#             */
/*   Updated: 2026/01/23 12:43:29 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) , _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (!this->_weapon)
		std::cout << this->_name << " punched with his fist" << std::endl;
	else
		std::cout << this->_name << " attacked with " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
