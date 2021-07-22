/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:40:56 by ksam              #+#    #+#             */
/*   Updated: 2021/07/22 16:53:18 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nickname, Weapon &firearm) : name(nickname), gun(firearm)
{
	std::cout << "Hello from HumanA constructor" << std::endl;
	return ;
}

HumanA::~HumanA()
{
	std::cout << "Hello from HumanA destructor" << std::endl;
	return ;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->gun.getType() << std::endl;
}