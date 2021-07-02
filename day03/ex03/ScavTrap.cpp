/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:47:39 by ksam              #+#    #+#             */
/*   Updated: 2021/07/02 18:06:42 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energypoints = 50;
	this->attackdamage = 20;

	std::cout << "ScavTrap param constructor" << std::endl;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor" << std::endl;
	return;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
	return;
}