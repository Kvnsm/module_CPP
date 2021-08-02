/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 17:30:18 by ksam              #+#    #+#             */
/*   Updated: 2021/08/02 18:38:27 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Default Cat CONSTRUCTOR" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Default Cat DESTRUCTOR" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow meow!!" << std::endl;
}