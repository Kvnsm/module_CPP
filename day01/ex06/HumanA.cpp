/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:08:07 by ksam              #+#    #+#             */
/*   Updated: 2021/06/24 17:24:56 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nickname, Weapon &firearm) : name(nickname), gun(firearm)
{
	
}

HumanA::~HumanA()
{
	return;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->gun.getType() << std::endl;
}
