/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:01:23 by ksam              #+#    #+#             */
/*   Updated: 2021/08/24 17:55:46 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	std::cout << "Param constructor AMateria" << std::endl;
	this->type = type;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}