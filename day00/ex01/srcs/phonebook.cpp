/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:45:42 by ksam              #+#    #+#             */
/*   Updated: 2021/03/17 17:32:39 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

int main(int argc, char **argv)
{
    Master		contact;
	std::string line;
    
	while (line.compare("EXIT"))
	{
		std::cout << "Hello, you are in your phonebook ! What can I do for you ?" << std::endl;
		getline(std::cin, line);
		if (!line.compare("ADD"))
			add_function(&contact);
		else if (!line.compare("SHARE"))
			std::cout << "Je suis share" << std::endl;
		else
			std::cout << "Invalid command" << std::endl;
	}
    return (0);
}