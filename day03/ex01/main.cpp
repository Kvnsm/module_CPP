/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:40:51 by ksam              #+#    #+#             */
/*   Updated: 2021/07/01 15:30:32 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap test("Moha");

	test.attack("Zombie");
	std::cout << std::endl;
	test.takeDamage(1);
	std::cout << std::endl;
	test.beRepaired(5);
	std::cout << std::endl;

	ScavTrap sweaty("LaSquale");

	std::cout << "LaSquale name: " << sweaty.name << std::endl;
	std::cout << "LaSquale HP: " << sweaty.hitpoints << std::endl;
	std::cout << "LaSquale EP: " << sweaty.energypoints << std::endl;
	std::cout << "LaSquale AD: " << sweaty.attackdamage << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	sweaty.guardGate();

	return (0);
}