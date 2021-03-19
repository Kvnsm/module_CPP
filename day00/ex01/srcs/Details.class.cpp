/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Details.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:42:40 by ksam              #+#    #+#             */
/*   Updated: 2021/03/19 00:52:01 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

Details::Details(void)
{
    this->first_name = "";
    this->last_name = "";
    this->nickname = "";
    this->login = "";
    this->postal_address = "";
    this->email = "";
    this->phone_number = "";
    this->birthday = "";
    this->fav_meal = "";
    this->underwear_color = "";
    this->darkest_secret = "";
    return;
}

Details::~Details(void)
{
    return;
}

void	Details::putdata()
{	
	std::cout << "First name :" << std::endl;
	getline(std::cin, first_name);

	std::cout << "Last name:" << std::endl;
	getline(std::cin, last_name);

	std::cout << "Nickname:" << std::endl;
	getline(std::cin, nickname);

	std::cout << "Login:" << std::endl;
	getline(std::cin, login);

	std::cout << "Postal address:" << std::endl;
	getline(std::cin, postal_address);

	std::cout << "Email address:" << std::endl;
	getline(std::cin, email);

	std::cout << "Phone number:" << std::endl;
	getline(std::cin, phone_number);

	std::cout << "Birthday date:" << std::endl;
	getline(std::cin, birthday);

	std::cout << "Favorite meal:" << std::endl;
	getline(std::cin, fav_meal);

	std::cout << "Underwear color:" << std::endl;
	getline(std::cin, underwear_color);

	std::cout << "Darkest secret:" << std::endl;
	getline(std::cin, darkest_secret);
}

void	Details::getdata()
{
	std::cout << "First name: " << first_name << std::endl;

	std::cout << "Last name: " << last_name << std::endl;

	std::cout << "Nickname: " << nickname << std::endl;

	std::cout << "Login: " << login << std::endl;

	std::cout << "Postal address: " << postal_address << std::endl;

	std::cout << "Email address: " << email << std::endl;

	std::cout << "Phone number: " << phone_number << std::endl;

	std::cout << "Birthday date: " << birthday << std::endl;

	std::cout << "Favorite meal: " << fav_meal << std::endl;

	std::cout << "Underwear color: " << underwear_color << std::endl;

	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

void	Details::getfirstname()
{
	std::cout << first_name;
	return;
}

void	Details::getlastname()
{
	std::cout << last_name;
	return;
}

void	Details::getnickname()
{
	std::cout << nickname;
	return;
}

void	Details::transform()
{
	int i;

	i = 0;
	if (first_name.length() < 10)
	{
		i = 10 - first_name.length();
		first_name.insert(0, i, ' ');
	}
	else if (first_name.length() >= 10)
	{
		first_name.erase(9, first_name.length());
		first_name.insert(9, 1, '.');
	}

	if (last_name.length() < 10)
	{
		i = 10 - last_name.length();
		last_name.insert(0, i, ' ');
	}
	else if (last_name.length() >= 10)
	{
		last_name.erase(9, last_name.length());
		last_name.insert(9, 1, '.');
	}

	if (nickname.length() < 10)
	{
		i = 10 - nickname.length();
		nickname.insert(0, i, ' ');
	}
	else if (nickname.length() >= 10)
	{
		nickname.erase(9, nickname.length());
		nickname.insert(9, 1, '.');
	}
}