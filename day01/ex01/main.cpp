/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:39:54 by ksam              #+#    #+#             */
/*   Updated: 2021/07/19 17:31:20 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	Classie;
	Zombie	*Hordy;

	Hordy = Classie.zombieHorde(5, "Ordi");

	std::cout << std::endl;

	int i = 0;

	while (i < 5)
	{
		Hordy->announce();
		i++;
	}

	std::cout << std::endl;

	delete[] Hordy;
	return (0);
}