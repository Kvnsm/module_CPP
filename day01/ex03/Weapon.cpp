/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:19:47 by ksam              #+#    #+#             */
/*   Updated: 2021/07/22 16:51:31 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "This is the weapon default constructor" << std::endl;
	return ;
}

Weapon::Weapon(std::string lala) : type(lala)
{
	std::cout << "This is the weapon param constructor" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "This is the weapon destructor" << std::endl;
	return ;
}

const	std::string Weapon::getType()
{
	return(this->type);
}

void	Weapon::setType(std::string str)
{
	this->type = str;
	return ;
}