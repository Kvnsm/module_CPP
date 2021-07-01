/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:49:13 by ksam              #+#    #+#             */
/*   Updated: 2021/07/01 11:33:45 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		int			hitpoints = 10;
		int			energypoints = 10;
		int			attackdamage = 0;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif