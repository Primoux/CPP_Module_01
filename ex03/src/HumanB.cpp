/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:30:27 by enchevri          #+#    #+#             */
/*   Updated: 2025/12/22 14:43:59 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>
#include <iostream>

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name)
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
