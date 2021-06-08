/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:18:32 by ksam              #+#    #+#             */
/*   Updated: 2021/06/08 16:31:05 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(std::string type, std::string name);
		~Zombie(void);
		void	advert(void);
		std::string getname(void);
		std::string gettype(void);
	private:
		std::string name;
		std::string type;
};

#endif