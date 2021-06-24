/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:20:34 by ksam              #+#    #+#             */
/*   Updated: 2021/06/24 17:27:11 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
#include <string>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string lala);
		~Weapon();
		const std::string getType();
		void	setType(std::string type);
	private:
		std::string type;
};

#endif