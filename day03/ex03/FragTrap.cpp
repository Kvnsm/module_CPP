/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:21:08 by ksam              #+#    #+#             */
/*   Updated: 2021/07/02 18:05:25 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energypoints = 100;
	this->attackdamage = 30;

	std::cout << "FragTrap param constructor" << std::endl;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor" << std::endl;
	return;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Hold [melee] to request a high five from your "\
				"friends. If you receive a high five, you and " \
				"your teammate receive +15% gun damage, +50% "\
				"firerate and regenerate 3% max health per "\
				"second for a while. If you don\'t receive a "\
				"high five or don\'t have any teammates, you "\
				"gain the gun damage and health regeneration "\
				"bonuses for a few seconds. 30 second cooldown "\
				"between high fives. This skill can be triggered "
				"by enemy melee attacks." << std::endl;
	return;
}