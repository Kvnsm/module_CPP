/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:54:23 by ksam              #+#    #+#             */
/*   Updated: 2021/03/18 02:16:03 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

void		data_backpusher(Master *manager)
{
	Details	var;
	
	var = fill();
	var.prev = manager->last;
	if (!manager->first)
		manager->first = &var;
	if (manager->last)
		manager->last->next = &var;
	manager->last = &var;
	manager->count++;
	var.index = manager->count;
}