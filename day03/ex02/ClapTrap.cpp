/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:34:35 by ksam              #+#    #+#             */
/*   Updated: 2021/07/01 14:38:17 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor" << std::endl;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap default destructor" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	std::cout << "ClapTrap param name constructor" << std::endl;
	return;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << ", deals " << this->attackdamage << " points of damage" << std::endl;
	this->energypoints = this->energypoints - 1;
	std::cout << this->energypoints << " energy points remaining" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " has been attacked and lost " << amount << " health points" << std::endl;
	this->hitpoints = this->hitpoints - amount;
	std::cout << this->hitpoints << " HP remaining" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Super potion used, and recovery " << amount << " HP & EP" << std::endl;
	this->energypoints += amount;
	this->hitpoints += amount;

	if (this->energypoints > 10)
		this->energypoints = 10;
	if (this->hitpoints > 10)
		this->hitpoints = 10;
	std::cout << "HP & EP restored (" << this->hitpoints << "/10)(" << this->energypoints << "/10)" << std::endl;
}
