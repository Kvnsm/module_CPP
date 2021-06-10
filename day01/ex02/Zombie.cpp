/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:18:29 by ksam              #+#    #+#             */
/*   Updated: 2021/06/10 11:40:58 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string p1, std::string p2) : type(p1), name(p2)
{
	// std::cout << "A new Zombie pop ! \n" << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	// std::cout << "A Zombie has been slain !\n" << std::endl;
	return;
}

void	Zombie::advert(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braaaaaaaaaaaaaaaaaains !" << std::endl;
}

std::string		Zombie::getname()
{
	return (this->name);
}

std::string		Zombie::gettype()
{
	return(this->type);
}