/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 01:15:09 by ksam              #+#    #+#             */
/*   Updated: 2021/06/22 01:26:42 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	return;
}

Human::~Human()
{
	return;
}

const Brain &Human::getBrain() const
{
    return (this->brain);
}

std::string Human::identify(void) const
{
	return (this->brain.identify());
}