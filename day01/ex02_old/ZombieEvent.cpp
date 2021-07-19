/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 07:04:32 by ksam              #+#    #+#             */
/*   Updated: 2021/06/10 11:38:59 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	// std::cout << "I am ZombieEvent constructor" << std::endl;
	this->name = "";
	this->type = "";
	return;
}

ZombieEvent::~ZombieEvent(void)
{
	// std::cout << "I am ZombieEvent destructor" << std::endl;
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

Zombie	ZombieEvent::randomChump(void)
{
	srand((unsigned) time(0));
	int randomNumber;
	randomNumber = (rand() % 10);
	select_name(randomNumber);
	Zombie randomZombie(this->type, this->name);
	return (randomZombie);
}

void	ZombieEvent::select_name(int index)
{
	std::string names[11] = {
		"Haeloisa",
		"Martin Rainbow 6",
		"Géraldine",
		"Haze",
		"Grosse Berta",
		"Gertrude",
		"Maurice",
		"Franck",
		"Bob",
		"Unknow",
		"zyw00?",
	};
	this->name = names[index];
}

void	ZombieEvent::announce(Zombie *none)
{
	std::cout << "Hello it's me, " << none->getname() << ", and I am a " << none->gettype() << std::endl;
}