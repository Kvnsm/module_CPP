/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:27:44 by ksam              #+#    #+#             */
/*   Updated: 2021/07/22 16:42:15 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &gun);
		~HumanA();
		void	attack();
	private:
		std::string name;
		Weapon		&gun;
};

#endif