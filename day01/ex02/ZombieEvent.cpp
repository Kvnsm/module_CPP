/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 07:04:32 by ksam              #+#    #+#             */
/*   Updated: 2021/06/08 18:14:40 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	std::cout << "I am ZombieEvent constructor" << std::endl;
	this->name = "";
	this->type = "";
	return;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "I am ZombieEvent destructor" << std::endl;
	return;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(this->type, name);
	return (zombie);
}

Zombie	ZombieEvent::randomChump()
{
	Zombie test("Type", "Name");
	return (test);
}