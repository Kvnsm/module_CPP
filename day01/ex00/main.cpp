/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:42:21 by ksam              #+#    #+#             */
/*   Updated: 2021/07/19 15:36:05 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	stacky("Easy");
	stacky.announce();
	std::cout << std::endl;
	
	Zombie *heapy;
	heapy =  heapy->newZombie("Hippie");
	heapy->announce();
	std::cout << std::endl;
	
	heapy->randomChump("Peasy");
	delete heapy;
	return (0);
}