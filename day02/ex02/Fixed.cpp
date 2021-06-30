/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:39:44 by ksam              #+#    #+#             */
/*   Updated: 2021/06/30 14:38:18 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : value(copy.getRawBits())
{
	// std::cout << "Copy constructor called" << std::endl; // just to prove it works
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &n)
{
	// std::cout << "Assignation operator called" << std::endl;
	if (this != &n)
		this->value = n.getRawBits();
	return (*this); // return the existing object
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member fonction called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	// std::cout << "setRawBits member fonction called" << std::endl;
	this->value = raw;
}

Fixed::Fixed(const int nb)
{
	// std::cout << "Int parameter constructor called" << std::endl;
	this->value = nb << this->bits;
}

Fixed::Fixed(const float nb)
{
	// std::cout << "Float parameter constructor called" << std::endl;
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

bool	Fixed::operator>(const Fixed &n) const
{
	return (this->getRawBits() > n.getRawBits());
}

bool	Fixed::operator<(const Fixed &n) const
{
	return (this->getRawBits() < n.getRawBits());
}

bool	Fixed::operator>=(const Fixed &n) const
{
	return (this->getRawBits() >= n.getRawBits());
}

bool	Fixed::operator<=(const Fixed &n) const
{
	return (this->getRawBits() <= n.getRawBits());
}

bool	Fixed::operator==(const Fixed &n) const
{
	return (this->getRawBits() == n.getRawBits());
}

bool	Fixed::operator!=(const Fixed &n) const
{
	return (this->getRawBits() != n.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &n)
{
	Fixed test;

	test.setRawBits(this->getRawBits() + n.getRawBits());
	return (test);
}

Fixed	Fixed::operator-(const Fixed &n)
{
	Fixed	to_ret;

	to_ret.setRawBits(this->getRawBits() - n.getRawBits());
	return (to_ret);
}

Fixed	Fixed::operator*(const Fixed &n)
{
	Fixed	ret;
	long	tmp, temporis;
	
	tmp = (long)this->getRawBits();
	temporis = (long)n.getRawBits();
	ret.setRawBits(tmp * temporis / (1 << this->bits));
	return (ret);
}

Fixed	Fixed::operator/(const Fixed &n)
{
	Fixed	ret;
	long	tmp, temporis;
	
	tmp = (long)this->getRawBits();
	temporis = (long)n.getRawBits();
	ret.setRawBits(tmp * (1 << this->bits) / temporis);
	return (ret);
}

Fixed	Fixed::operator++()
{
	Fixed	temp;

	temp.value = ++value;
	return (temp);
}

Fixed	Fixed::operator--()
{
	Fixed temp;

	temp.value = --value;
	return (temp);
}

Fixed	Fixed::operator++(int)
{
	Fixed temporis;

	temporis.value = value++;
	return (temporis);
}

Fixed	Fixed::operator--(int)
{
	Fixed temporis;

	temporis.value = value--;
	return (temporis);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::min(const Fixed &a,const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (b > a)
		return (b);
	else
		return (a);
}

const Fixed &Fixed::max(const Fixed &a,const Fixed &b)
{
	if (b > a)
		return (b);
	return (a);
}