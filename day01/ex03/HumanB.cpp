/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:48:47 by ksam              #+#    #+#             */
/*   Updated: 2021/07/22 16:57:45 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nickname) : name(nickname)
{
	std::cout << "Hello from HumanB constructor" << std::endl;
	this->gun = NULL;
	return ;
}

HumanB::~HumanB()
{
	std::cout << "Hello from HumanB destructor" << std::endl;
	return ;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->gun->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &riffle)
{
	this->gun = &riffle;
}