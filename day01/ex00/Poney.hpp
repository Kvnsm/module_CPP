/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Poney.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 05:03:58 by ksam              #+#    #+#             */
/*   Updated: 2021/06/04 19:52:34 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONEY_H
# define PONEY_H

#include <iostream>
#include <string>

class Poney
{
	public:
		Poney(std::string name, std::string age, std::string length);
		~Poney(void);
		std::string getname(void);
		std::string getage(void);
		std::string getlength(void);
		void		description(void);
	private:
		std::string name;
		std::string age;
		std::string length;

};


#endif