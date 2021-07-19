/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 01:15:42 by ksam              #+#    #+#             */
/*   Updated: 2021/06/22 01:18:27 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include <string>
#include <iostream>
#include "Brain.hpp"

class Human
{
	public:
		Human();
		~Human();
		const Brain &getBrain() const;
		std::string identify() const;
	private:
		const Brain brain;
};

#endif