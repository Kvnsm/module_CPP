/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:40:51 by ksam              #+#    #+#             */
/*   Updated: 2021/07/31 14:44:55 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	// ClapTrap test("Moha");

	// test.attack("Zombie");
	// std::cout << std::endl;
	// test.takeDamage(1);
	// std::cout << std::endl;
	// test.beRepaired(5);
	// std::cout << std::endl;

	ScavTrap sweaty("LaSquale");

	sweaty.attack("Zombie!");
	std::cout << std::endl;
	sweaty.takeDamage(100);
	std::cout << std::endl;
	sweaty.beRepaired(3);
	std::cout << std::endl;
	sweaty.guardGate();
	std::cout << std::endl;

	return (0);
}