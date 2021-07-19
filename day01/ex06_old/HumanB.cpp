/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:08:15 by ksam              #+#    #+#             */
/*   Updated: 2021/06/24 18:14:54 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nickname) : name(nickname)
{

}

HumanB::~HumanB()
{

}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->gun->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &riffle)
{
	this->gun = &riffle;
}