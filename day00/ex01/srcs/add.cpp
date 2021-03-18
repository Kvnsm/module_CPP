/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:26:29 by ksam              #+#    #+#             */
/*   Updated: 2021/03/18 02:24:09 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

void    add_function(Master *contact)
{
	if (contact->count < 8)
		data_backpusher(contact);
	else
		std::cout << "Phonebook full, limite is 8" << std::endl;
	std::cout << contact->last->index << std::endl;
	return;
}

Details		fill()
{
	Details		var;
	
	std::cout << "First name :" << std::endl;
	std::cin >> var.first_name;

	std::cout << "Last name:" << std::endl;
	std::cin >> var.last_name;

	std::cout << "Nickname:" << std::endl;
	std::cin >> var.nickname;

	std::cout << "Login:" << std::endl;
	std::cin >> var.login;

	std::cout << "Postal address:" << std::endl;
	std::cin >> var.postal_address;

	std::cout << "Email address:" << std::endl;
	std::cin >> var.email;

	std::cout << "Phone number:" << std::endl;
	std::cin >> var.phone_number;

	std::cout << "Birthday date:" << std::endl;
	std::cin >> var.birthday;

	std::cout << "Favorite meal:" << std::endl;
	std::cin >> var.fav_meal;

	std::cout << "Underwear color:" << std::endl;
	std::cin >> var.underwear_color;

	std::cout << "Darkest secret:" << std::endl;
	std::cin >> var.darkest_secret;

	return(var);
}