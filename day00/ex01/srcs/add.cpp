/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:26:29 by ksam              #+#    #+#             */
/*   Updated: 2021/03/17 17:39:51 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

void    add_function(Master *contact)
{
	data_backpusher(contact);
	if (contact->count <= 8)
	{
		std::cout << "First name :" << std::endl;
		getline(std::cin, contact->last->first_name);

		std::cout << "Last name:" << std::endl;
		getline(std::cin, contact->last->last_name);
		std::cout << contact->last->first_name << std::endl;
	}
	else
		std::cout << "Phonebook full, limite is 8" << std::endl;
	return;
}