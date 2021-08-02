/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:07:52 by ksam              #+#    #+#             */
/*   Updated: 2021/08/02 19:10:59 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "Wrong Cat";
	std::cout << type << " is born" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << type << " is dead" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow!!" << std::endl;
}