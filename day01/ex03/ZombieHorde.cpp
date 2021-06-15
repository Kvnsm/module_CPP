/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:36:53 by ksam              #+#    #+#             */
/*   Updated: 2021/06/15 18:22:55 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	srand((unsigned) time(0) + clock());
	Zombie	*newZombies = new Zombie[n];
	int i;

	i = 0;
	while (i < n)
	{
		newZombies[i].type = randomType();
		newZombies[i].name = randomChump();
		newZombies[i].advert();
		i++;
	}
	return;
}

ZombieHorde::~ZombieHorde(void)
{
	return;
}

std::string ZombieHorde::randomChump(void)
{
	int randomNumber;
	randomNumber = (rand() % 11);
	select_name(randomNumber);
	return (this->name);
}

void	ZombieHorde::select_name(int index)
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

std::string ZombieHorde::randomType(void)
{
	int randomNumber;
	randomNumber = (rand() % 10);
	select_type(randomNumber);
	return (this->type);
}

void	ZombieHorde::select_type(int index)
{
	std::string type[11] = {
		"EntryFrager",
		"Lurker",
		"BombPlanter",
		"Smoker",
		"Flasher",
		"StarPlayer",
		"Initiator",
		"Sentinel",
		"Duelist",
		"Controler",
		"ch3ater",
	};
	this->type = type[index];
}