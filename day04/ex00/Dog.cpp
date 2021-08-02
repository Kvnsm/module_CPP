/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 17:24:22 by ksam              #+#    #+#             */
/*   Updated: 2021/08/02 18:37:13 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default CONSTRUCTOR" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Default Dog DESTRUCTOR" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wouf wouf!!!" << std::endl;
}