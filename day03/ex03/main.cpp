/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:40:51 by ksam              #+#    #+#             */
/*   Updated: 2021/07/31 14:51:58 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap KO("KO");

	KO.attack("Sova");
	std::cout << std::endl;
	KO.takeDamage(14);
	std::cout << std::endl;
	KO.beRepaired(12);
	std::cout << std::endl;
	KO.highFivesGuys();
	std::cout << std::endl;
	KO.guardGate();
	std::cout << std::endl;
	KO.whoAmI();
	std::cout << std::endl;
	return (0);
}