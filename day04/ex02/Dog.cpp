/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:14:00 by ksam              #+#    #+#             */
/*   Updated: 2021/08/23 19:18:56 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default CONSTRUCTOR" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Default Dog DESTRUCTOR" << std::endl;
	delete this->brain;
}

void Dog::makeSound()
{
	std::cout << "Wouf wouf!!!" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}
Dog::Dog(Dog const &other) : Animal(other)
{
	this->brain = new Brain(*other.getBrain());
}

Dog &Dog::operator=(Dog const &other)
{
	if (this != &other)
	{
		delete this->brain;
		this->brain = new Brain(*other.getBrain());
		this->Animal::operator=(other);
	}
	return (*this);
}