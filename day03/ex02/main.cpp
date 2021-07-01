/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:40:51 by ksam              #+#    #+#             */
/*   Updated: 2021/07/01 18:15:14 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	// ClapTrap test("Moha");

	// test.attack("Zombie");
	// std::cout << std::endl;
	// test.takeDamage(1);
	// std::cout << std::endl;
	// test.beRepaired(5);
	// std::cout << std::endl;

	// ScavTrap sweaty("LaSquale");

	// std::cout << "LaSquale name: " << sweaty.name << std::endl;
	// std::cout << "LaSquale HP: " << sweaty.hitpoints << std::endl;
	// std::cout << "LaSquale EP: " << sweaty.energypoints << std::endl;
	// std::cout << "LaSquale AD: " << sweaty.attackdamage << std::endl;

	// std::cout << std::endl;
	// sweaty.guardGate();

	FragTrap skye("Jok'air");

	std::cout << "Jok'air name: " << skye.name << std::endl;
	std::cout << "Jok'air HP: " << skye.hitpoints << std::endl;
	std::cout << "Jok'air EP: " << skye.energypoints << std::endl;
	std::cout << "Jok'air AD: " << skye.attackdamage << std::endl;
	
	std::cout << std::endl;
	skye.highFivesGuys();

	return (0);
}