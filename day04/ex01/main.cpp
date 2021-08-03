/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:20:44 by ksam              #+#    #+#             */
/*   Updated: 2021/08/03 19:17:21 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *Animals[10];
	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
			Animals[i] = new Dog();
		else
			Animals[i] = new Cat();
	}

	
	std::cout << std::endl << "DEEP COPY!" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	Dog copy(*(Dog *)Animals[4]);
	for (int i = 0; i < 100; ++i)
	{
		std::cout << "[" << i << "] " << copy.getBrain()->getIdea(i) << "\t\t\t | ";
		std::cout << ((Dog *)Animals[4])->getBrain()->getIdea(i) << std::endl;
	}
	std::cout << "-----------------------------"
				<< std::endl;


	for (int i = 0; i < 10; ++i)
	{
		delete Animals[i];
	}
	return (0);
}