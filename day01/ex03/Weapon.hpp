/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 17:56:10 by ksam              #+#    #+#             */
/*   Updated: 2021/07/22 16:51:09 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string lala);
		~Weapon();
		const	std::string getType();
		void	setType(std::string type);
	private:
		std::string	type;
};

#endif