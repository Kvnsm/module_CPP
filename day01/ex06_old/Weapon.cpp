/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:20:13 by ksam              #+#    #+#             */
/*   Updated: 2021/06/24 17:27:19 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return;
}

Weapon::Weapon(std::string lala) : type(lala)
{

}

Weapon::~Weapon()
{
	return;
}

const std::string Weapon::getType()
{
	return(this->type);
}

void	Weapon::setType(std::string str)
{
	this->type = str;
}