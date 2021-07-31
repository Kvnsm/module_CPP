/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:21:13 by ksam              #+#    #+#             */
/*   Updated: 2021/07/31 13:07:44 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	std::cout << "Hello it's Karen constructor" << std::endl;
	return ;
}

Karen::~Karen()
{
	std::cout << "Hello it's Karen destructor" << std::endl;
	return ;
}

void	Karen::debug()
{
	std::cout << "I love to get extra bacon " \
	"for my 7XL-double-cheese-triple-pickle-special-ketchup burger. " \
	"I just love it!" << std::endl;
	return ;
}

void	Karen::info()
{
	std::cout << "I cannot believe adding extra" \
	"bacon cost more money. You don’t put enough! If you did I would not have to ask" \
	"for it!" << std::endl;
	return ;
}

void	Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been" \
	"coming here for years and you just started working here last month." << std::endl;
	return ;
}

void	Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." \
		<< std::endl;
	return ;
}

void Karen::complain(std::string level)
{
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};

	void (Karen::*funcs[4])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error,
	};

	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == level)
		{
			(this->*funcs[i])();
			return;
		}
	}
}