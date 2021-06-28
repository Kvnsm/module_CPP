/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:25:26 by ksam              #+#    #+#             */
/*   Updated: 2021/06/28 19:08:38 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	value;
		static const int bits = 8; // Value equal to 8
	public:
		Fixed();
		Fixed(const Fixed &n); // copy
		~Fixed();
		
		Fixed	&operator=(const Fixed &n);
		
		bool	operator>(const Fixed &n);
		bool	operator<(const Fixed &n);
		bool	operator>=(const Fixed &n);
		bool	operator<=(const Fixed &n);
		bool	operator==(const Fixed &n);
		bool	operator!=(const Fixed &n);

		Fixed	operator+(const Fixed &n);
		Fixed	operator-(const Fixed &n);
		Fixed	operator*(const Fixed &n);
		Fixed	operator/(const Fixed &n);
		
		int		getRawBits(void) const; // Return the raw value of the fixed point value
		void	setRawBits(const int raw); // that set the raw value of the fixed point value

		Fixed(const int nb);
		Fixed(const float nb);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &nb);

#endif