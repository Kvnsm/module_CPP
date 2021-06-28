/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:39:44 by ksam              #+#    #+#             */
/*   Updated: 2021/06/28 14:31:58 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : value(copy.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl; // just to prove it works
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &n)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &n)
		this->value = n.getRawBits();
	return (*this); // return the existing object
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member fonction called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member fonction called" << std::endl;
	this->value = raw;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int parameter constructor called" << std::endl;
	this->value = value << this->bits;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float parameter constructor called" << std::endl;
	this->value = roundf(nb * (1 << this->bits));
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->value / roundf(1 << this->bits)));
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &nb)
{
    o << nb.toFloat();
    return o;
}