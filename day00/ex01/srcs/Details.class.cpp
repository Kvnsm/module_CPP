/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Details.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:42:40 by ksam              #+#    #+#             */
/*   Updated: 2021/03/17 17:17:20 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

Details::Details(void)
{
    std::cout << "Constructor called" << std::endl;

    // this->first_name = "";
    // this->last_name = "";
    // this->nickname = "";
    // this->login = "";
    // this->postal_address = "";
    // this->email = "";
    // this->phone_number = "";
    // this->birthday = "";
    // this->fav_meal = "";
    // this->underwear_color = "";
    // this->darkest_secret = "";

	this->prev = NULL;
	this->next = NULL;
    return;
}

Details::~Details(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

Master::Master(void)
{
    this->count = 0;
    this->current = NULL;
    this->first = NULL;
    this->last = NULL;
    return;
}

Master::~Master(void)
{
    return;
}