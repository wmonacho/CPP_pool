/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:39:28 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/30 14:58:16 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(Weapon type)
{
	*this->_humanB_weapon = type;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_humanB_weapon << std::endl;
}