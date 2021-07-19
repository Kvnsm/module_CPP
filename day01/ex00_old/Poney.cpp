/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Poney.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 05:04:01 by ksam              #+#    #+#             */
/*   Updated: 2021/06/04 20:14:00 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Poney.hpp"

Poney::Poney(std::string p1, std::string p2, std::string p3) : name(p1), age(p2), length(p3)
{
	std::cout << "A new pony is born !\n\n" << std::endl;
	return;
}

Poney::~Poney(void)
{
	std::cout << "Unlucky, a pony just died.\n" << std::endl;
	return;
}

std::string Poney::getname(void)
{
	return (this->name);
}

std::string Poney::getage(void)
{
	return (this->age);
}

std::string Poney::getlength(void)
{
	return (this->length);
}

void	Poney::description(void)
{
	std::cout << "My name is " << this->name << std::endl;
	std::cout << "I am " << this->age << std::endl;
	std::cout << "and I am " << this->length << " inches\n" << std::endl;
}