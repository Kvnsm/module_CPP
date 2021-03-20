/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 05:03:54 by ksam              #+#    #+#             */
/*   Updated: 2021/03/20 01:08:31 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Poney.hpp"

Poney	poney0nTheStack(std::string name, std::string age, std::string length)
{
	Poney Stackny = Poney(name, age, length);
	std::cout << "My name is " << Stackny.getname() << std::endl;
	return (Stackny);
}

Poney *poneyOnTheHeap(std::string name, std::string age, std::string length)
{
	Poney *Heapy = new Poney(name, age, length);
	std::cout << "And me I'm " << Heapy->getname() << std::endl;
	return (Heapy);
}

int	main()
{
	Poney Stack = poney0nTheStack("Stackny", "3.yo", "5'6");
	std::cout << "Stackny is " << Stack.getage() << std::endl;

	Poney *Heap = poneyOnTheHeap("Hippie", "1 year old", "5'4");
	std::cout << "Hippie is " << Heap->getage() << std::endl;

	Poney *test = Heap;
	std::cout << "This is a test " << test->getname() << std::endl;
	delete(Heap);
	return (0);
}