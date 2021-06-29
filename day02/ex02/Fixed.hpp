/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:25:26 by ksam              #+#    #+#             */
/*   Updated: 2021/06/29 16:08:53 by ksam             ###   ########lyon.fr   */
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
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed &n); // copy
		~Fixed();
		
		Fixed	&operator=(const Fixed &n);
		
		bool	operator>(const Fixed &n) const;
		bool	operator<(const Fixed &n) const;
		bool	operator>=(const Fixed &n) const;
		bool	operator<=(const Fixed &n) const;
		bool	operator==(const Fixed &n) const;
		bool	operator!=(const Fixed &n) const;

		Fixed	operator+(const Fixed &n);
		Fixed	operator-(const Fixed &n);
		Fixed	operator*(const Fixed &n);
		Fixed	operator/(const Fixed &n);

		Fixed	operator++(); // prefix incrementation
		Fixed	operator--(); // prefix decrementation
		Fixed	operator++(int); // post incrementation
		Fixed	operator--(int); // post decrementation
		
		int		getRawBits(void) const; // Return the raw value of the fixed point value
		void	setRawBits(const int raw); // that set the raw value of the fixed point value

		float toFloat(void) const;
		int toInt(void) const;

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

};

std::ostream &operator<<(std::ostream &o, Fixed const &nb);

#endif