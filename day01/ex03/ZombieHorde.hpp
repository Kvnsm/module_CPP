/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:36:49 by ksam              #+#    #+#             */
/*   Updated: 2021/06/15 18:21:49 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

#include "Zombie.hpp"
#include <cstdlib>
#include <ctime>

class ZombieHorde
{
	public:
		ZombieHorde(int n);
		~ZombieHorde();
		std::string	randomChump();
		std::string	randomType();
		void	announce(Zombie *none);
	private:
		std::string name;
		std::string type;
		void	select_name(int index);
		void	select_type(int index);
};

#endif