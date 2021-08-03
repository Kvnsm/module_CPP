/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:37:55 by ksam              #+#    #+#             */
/*   Updated: 2021/08/03 18:59:17 by ksam             ###   ########lyon.fr   */
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

void Cat::makeSound() const
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
		this->~Cat();
		this->brain = new Brain(*other.getBrain());
		this->Animal::operator=(other);
	}
	return (*this);
}