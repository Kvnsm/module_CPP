/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 21:34:21 by ksam              #+#    #+#             */
/*   Updated: 2021/07/02 18:25:34 by ksam             ###   ########lyon.fr   */
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
	ClapTrap::name = name;
	this->hitpoints = FragTrap::hitpoints;
	this->energypoints = ScavTrap::energypoints;
	this->attackdamage = FragTrap::attackdamage;
	
	std::cout << "DiamondTrap param constructor" << std::endl;
}