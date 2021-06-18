/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:21:34 by ksam              #+#    #+#             */
/*   Updated: 2021/06/18 16:54:53 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Brain::Brain() : neurones(0), conscience(0), prise_decision(0), creativite(0), memoire(0), attention(0), emotions(0)
// {
// 	return;
// }

Brain::Brain()
{
	return;
}

Brain::~Brain()
{
	return;
}

std::string	Brain::identify()
{
	const long adr = (long)this;

	std::stringstream ss;
	ss << "0x" << std::uppercase << std::hex << adr;
	return (ss.str());
}

