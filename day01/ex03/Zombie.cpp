/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:24:57 by ksam              #+#    #+#             */
/*   Updated: 2021/06/15 15:01:55 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : type(""), name("")
{
	return;
}

Zombie::Zombie(std::string p1, std::string p2) : type(p1), name(p2)
{
	return;
}

Zombie::~Zombie(void)
{
	return;
}

void	Zombie::advert(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braaaaaaaaaaaaaaaaaains !" << std::endl;
}

std::string Zombie::gettype(void)
{
	return(this->type);
}

std::string Zombie::getname(void)
{
	return(this->name);
}