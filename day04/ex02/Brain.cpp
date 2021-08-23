/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:14:15 by ksam              #+#    #+#             */
/*   Updated: 2021/08/23 17:18:57 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	const std::string ideas[] = {
		"Feel hungry",
		"'m thristy",
		"wanna hang out",
		"Need to sleeeeep~~ zzz",
		"wanna play",
		"Wanna :poop:",
		":pee:",
		"need hugs ;(",
		"feel happy",
		"Urrrrrrrrrrh ate too much",
		"prepare to fight !",
		"feel sick :z",
		"??? what u doing human ?",
		"lazy time",
		"SUPER ACTIVE TIME !",
		"Defend my area",
		"So... Exhausted",
		"Am I god here ?",
	};

	std::cout << "Constructor Brain" << std::endl;
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = ideas[rand() % (sizeof(ideas) / sizeof(std::string))];
	}
}

Brain::Brain(Brain const &other)
{
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = other.getIdea(i);
}

Brain &Brain::operator=(Brain const &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = other.getIdea(i);
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor Brain" << std::endl;
}

std::string const &Brain::getIdea(int index) const
{
	return this->ideas[index];
}