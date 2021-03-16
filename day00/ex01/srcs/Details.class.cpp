/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Details.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:42:40 by ksam              #+#    #+#             */
/*   Updated: 2021/03/16 21:40:13 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contact.hpp"

Contact::Contact(void)
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Contact::~Contact(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}