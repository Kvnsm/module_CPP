/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 07:04:22 by ksam              #+#    #+#             */
/*   Updated: 2021/06/15 12:57:23 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	zombieOnTheStack()
{
	Zombie Stacky("Lent", "Stacky");
	ZombieEvent test;
	
	test.announce(&Stacky);
	Stacky.advert();
}

void	zombieOnTheStackWithRandomName()
{
	ZombieEvent Stacky;
	Stacky.setZombieType("Camper");

	Zombie nameless = Stacky.randomChump();
	Stacky.announce(&nameless);
	nameless.advert();
}

void	zombieOneTheHeap()
{
	ZombieEvent Stacky;
	Stacky.setZombieType("Killer");
	Zombie *nameless = Stacky.newZombie("Stacky");
	Stacky.announce(nameless);
	nameless->advert();
	delete nameless;
	nameless = NULL;
	if (nameless)
		Stacky.announce(nameless);
	else
		std::cout << "Sniif, nameless is dead" << std::endl;
		
}

int main()
{
	zombieOnTheStack();
	std::cout << std::endl;
	zombieOnTheStackWithRandomName();
	std::cout << std::endl;
	zombieOneTheHeap();
	return (0);
}