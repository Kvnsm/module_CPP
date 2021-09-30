/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 17:16:47 by ksam              #+#    #+#             */
/*   Updated: 2021/08/02 18:34:53 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Default Animal CONSTRUCTOR" << std::endl;
	return ;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << this->type << \
		" param Animal CONSTRUCTOR" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default Animal DESTRUCTOR" << std::endl;
	return ;
}

std::string const &Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animals don't make specific sound" << std::endl;
	return;
}