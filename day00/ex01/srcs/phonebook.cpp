/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:45:42 by ksam              #+#    #+#             */
/*   Updated: 2021/07/17 09:26:14 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

int main(int argc, char **argv)
{
	Details contact[8];
	std::string line;
	int		i;
	int		index;
	int		oldest;
    
	i = -1;
	index = 0;
	oldest = 0;
	while (line.compare("EXIT"))
	{
		std::cout << std::endl;
		std::cout << "Hello, you are in your phonebook ! What can I do for you ?" << std::endl;
		getline(std::cin, line);
		if (!line.compare("ADD"))
		{
			if (i == 7)
			{
				std::cout << "Phonebook is full, limit reached, the oldest contact will be remplace (Y/n)" << std::endl;
				std::string	temporis;
				getline(std::cin, temporis);
				if (!temporis.compare("Y"))
				{
					contact[oldest].putdata();
					oldest++;
					if (oldest == 7)
						oldest = 0;
				}
			}
			else
				contact[++i].putdata();
		}
		else if (!line.compare("SEARCH"))
		{
			display(contact, i);
			if (i > -1)
			{
				std::cout << "Select a contact by enter his index" << std::endl;
				std::string temp;
				int	flag = 0;
				getline(std::cin, temp);
				for (int i = 0; i < temp.length(); i++)
				{
					if (!isdigit(temp[i]))
					{
						std::cout << "Error: Only number accepted" << std::endl;
						flag = 1;
						break ;
					}
				}
				if (!flag)
				{
					std::stringstream(temp) >> index;
					index -= 1;
					if (index <= i)
						contact[index].getdata();
					else
						std::cout << "Index not found" << std::endl;
				}
			}
		}
		else if (!line.compare("!help"))
		{
			std::cout << std::endl;
			std::cout << "Welcom to my phonebook, there are only three commands" << std::endl \
			<< "Type ADD to create a new contact, limit of contacts is 8." << std::endl \
			<< "Type SEARCH to list existing contact, then enter the index for more details." << std::endl \
			<< "Type EXIT to exit the programme, WARNING : when the programme quit it will DELETE all contacts." << std::endl;
		}
		else if (!line.compare("EXIT"))
			break;
		else
		{
			std::cout << "Invalid command. " \
			<< "Type !help for more informations" << std::endl;
		}
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
