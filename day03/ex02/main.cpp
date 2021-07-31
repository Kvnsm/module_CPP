/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:40:51 by ksam              #+#    #+#             */
/*   Updated: 2021/07/31 14:47:43 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap skye("Jok'air");

	std::cout << "Jok'air name: " << skye.name << std::endl;
	std::cout << "Jok'air HP: " << skye.hitpoints << std::endl;
	std::cout << "Jok'air EP: " << skye.energypoints << std::endl;
	std::cout << "Jok'air AD: " << skye.attackdamage << std::endl;
	std::cout << std::endl;

	skye.attack("Breach");
	std::cout << std::endl;

	skye.takeDamage(100);
	std::cout << std::endl;

	skye.beRepaired(3);
	std::cout << std::endl;

	skye.highFivesGuys();
	std::cout << std::endl;

	return (0);
}