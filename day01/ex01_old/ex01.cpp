/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 20:21:08 by ksam              #+#    #+#             */
/*   Updated: 2021/06/08 07:01:14 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string	*panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}

int main()
{
	memoryLeak();
	return (0);
}