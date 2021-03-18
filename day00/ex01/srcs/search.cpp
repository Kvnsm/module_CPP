/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 02:37:51 by ksam              #+#    #+#             */
/*   Updated: 2021/03/18 03:16:25 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

void	search_function(Master *contact)
{
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "|" << "  Index   " << "|" << "First name " << "|" << "Last name " << "|" << " Nickname " << "|" << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	contact->current = contact->first;
	while (contact->current)
	{
		std::string test = std::to_string(contact->current->index);
		contact->current = contact->current->next;
	}

}