/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 05:03:54 by ksam              #+#    #+#             */
/*   Updated: 2021/06/04 20:15:06 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Poney.hpp"

void	poney0nTheStack(void)
{
	Poney Stackny = Poney("Stackny", "3.yo", "5'6");
	Stackny.description();
}

void	poneyOnTheHeap(void)
{
	Poney *Heapy = new Poney("Hippie", "1 year old", "5'4");
	Heapy->description();
	delete(Heapy);
	Heapy = NULL;

	if (Heapy)
	{
		Poney *test = Heapy;
		std::cout << "This is a test and his name is : " << test->getname() << std::endl;
	}
	else
		std::cout << "Heap is dead :snif:" << std::endl;

}

int	main()
{
	poney0nTheStack();
	poneyOnTheHeap();
	return (0);
}