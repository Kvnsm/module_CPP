/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:14:06 by ksam              #+#    #+#             */
/*   Updated: 2021/08/23 19:18:48 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Default Cat CONSTRUCTOR" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Default Cat DESTRUCTOR" << std::endl;
	delete this->brain;
}

void Cat::makeSound()
{
	std::cout << "Meow meow!!" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return (this->brain);
}

Cat::Cat(Cat const &other) : Animal(other)
{
	this->brain = new Brain(*other.getBrain());
}

Cat &Cat::operator=(Cat const &other)
{
	if (this != &other)
	{
		delete this->brain;
		this->brain = new Brain(*other.getBrain());
		this->Animal::operator=(other);
	}
	return (*this);
}