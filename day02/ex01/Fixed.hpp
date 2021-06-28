/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:25:26 by ksam              #+#    #+#             */
/*   Updated: 2021/06/28 11:34:00 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

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

		int		getRawBits(void) const; // Return the raw value of the fixed point value
		void	setRawBits(const int raw); // that set the raw value of the fixed point value
};

#endif