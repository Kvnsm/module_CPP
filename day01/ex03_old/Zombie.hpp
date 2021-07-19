/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:27:54 by ksam              #+#    #+#             */
/*   Updated: 2021/06/15 18:19:08 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string type, std::string name);
		~Zombie(void);
		void	advert(void);
		std::string getname(void);
		std::string gettype(void);
		std::string type;
		std::string name;
};

#endif