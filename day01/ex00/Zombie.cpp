/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:59:53 by ksam              #+#    #+#             */
/*   Updated: 2021/07/19 15:26:56 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string p1) : name(p1)
{
	std::cout << "This is a parameter constructor !" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << "A Zombie has been slain !!! (" << this->name << ")" << std::endl;
	return ;
}

void	Zombie::announce()
{
	std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie	*Zombie::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return(zombie);
}

void	Zombie::randomChump(std::string name)
{
	Zombie	superZombie = Zombie(name);
	superZombie.announce();
}