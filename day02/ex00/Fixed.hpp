/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:25:26 by ksam              #+#    #+#             */
/*   Updated: 2021/06/27 19:39:06 by ksam             ###   ########lyon.fr   */
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
		Fixed(Fixed const &n); // copy
		~Fixed();
		
		Fixed	&operator=(Fixed const &n);

		int		getRawBits(void) const; // Return the raw value of the fixed point value
		void	setRawBits(int const raw); // that set the raw value of the fixed point value
};

#endif