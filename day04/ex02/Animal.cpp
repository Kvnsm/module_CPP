/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:14:21 by ksam              #+#    #+#             */
/*   Updated: 2021/08/23 19:20:33 by ksam             ###   ########lyon.fr   */
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

void Animal::makeSound()
{
	// std::cout << "Animal Animal!!!" << std::endl;
}

Animal::Animal(Animal const &other)
{
	*this = other;
}

Animal &Animal::operator=(Animal const &other)
{
	this->type = other.getType();
	return (*this);
}