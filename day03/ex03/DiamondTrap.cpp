/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 21:34:21 by ksam              #+#    #+#             */
/*   Updated: 2021/07/03 18:08:56 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hitpoints = FragTrap::hitpoints;
	this->energypoints = ScavTrap::energypoints;
	this->attackdamage = FragTrap::attackdamage;
	
	std::cout << "DiamondTrap param constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap default destructor" << std::endl;
	return;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->name << " & my ClapTrap name is " << ClapTrap::name << std::endl;
	return;
}

void	DiamondTrap::highFivesGuys()
{
	FragTrap::highFivesGuys();
	return;
}

void	DiamondTrap::guardGate()
{
	ScavTrap::guardGate();
	return;
}