/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:40:05 by ksam              #+#    #+#             */
/*   Updated: 2021/07/19 17:23:26 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*newZombies;

	newZombies = new Zombie[N];

	int i = 0;
	while (i < N)
	{
		newZombies[i].name = name;
		i++;
	}
	return (newZombies);
}