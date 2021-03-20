/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Poney.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 05:04:01 by ksam              #+#    #+#             */
/*   Updated: 2021/03/20 00:52:20 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Poney.hpp"

Poney::Poney(std::string p1, std::string p2, std::string p3) : name(p1), age(p2), length(p3)
{
	std::cout << "Constructor born" << std::endl;
	return;
}

Poney::~Poney(void)
{
	std::cout << "Destructor died" << std::endl;
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