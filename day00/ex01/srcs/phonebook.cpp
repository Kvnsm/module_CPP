/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:45:42 by ksam              #+#    #+#             */
/*   Updated: 2021/03/18 22:16:36 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

int main(int argc, char **argv)
{
	Details contact[8];
	std::string line;
	int		i;
	int		index;
    
	i = -1;
	index = 0;
	while (line.compare("EXIT"))
	{
		std::cout << std::endl;
		std::cout << "Hello, you are in your phonebook ! What can I do for you ?" << std::endl;
		std::cin >> line;
		if (!line.compare("ADD"))
		{
			if (i == 7)
				std::cout << "Phonebook is full, limit reached" << std::endl;
			else
				contact[++i].putdata();
		}
		else if (!line.compare("SEARCH"))
		{
			display(contact, i);
			if (i != -1)
			{
				std::cout << "Select a contact by enter his index" << std::endl;
				std::string test;
				std::cin >> test;
				
				index = std::stoi(test);
				contact[index].getdata();
			}
		}
		else if (!line.compare("EXIT"))
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}
    return (0);
}

void	display(Details *contact, int index)
{
	int 			j;
	std::string		buffer;
	Details			temp;

	j = 0;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << SEPARATOR << "  Index   " << SEPARATOR << "First name" << SEPARATOR << "Last name " << SEPARATOR << " Nickname " << SEPARATOR << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (j <= index)
	{
		temp = contact[j];
		temp.transform();
		buffer = std::to_string(j + 1);
		std::cout << SEPARATOR;
		if (buffer.length() < 10)
			std::cout << std::setw(10 - buffer.length() + 1);
		std::cout << buffer;
		std::cout << SEPARATOR;
		temp.getfirstname();
		std::cout << SEPARATOR;
		temp.getlastname();
		std::cout << SEPARATOR;
		temp.getnickname();
		std::cout << SEPARATOR;
		std::cout << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		j++;
	}
}