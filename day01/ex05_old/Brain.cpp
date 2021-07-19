/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:21:34 by ksam              #+#    #+#             */
/*   Updated: 2021/06/22 01:27:59 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	neurones = 1;
	conscience = 1;
	prise_decision = 1;
	creativite = 1;
	memoire = 1;
	attention = 1;
	emotions = 1;
	return;
}

Brain::~Brain()
{
	return;
}

std::string	Brain::identify() const
{
	std::stringstream adr;
	adr << this;
	return (adr.str());
}

