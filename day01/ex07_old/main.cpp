/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 18:54:56 by ksam              #+#    #+#             */
/*   Updated: 2021/06/26 23:45:45 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::string		s1 = "";
	std::string		s2 = "";
	std::string		cache = "";
	std::string		to_ret = "";
	std::fstream	myfile;
	std::string replace = argv[1];
	replace += ".replace";
	
	if (argc != 4)
	{
		std::cout << "Error: wrong argument number" << std::endl;
		return (1);
	}
	
	s1 = argv[2];
	s2 = argv[3];

	if (s1.length() == 0 || s2.length() == 0)
	{
		std::cout << "Error : s1 or s2 can't be NULL" << std::endl;
		return (1);
	}
	
	myfile.open(argv[1], std::fstream::in);
	if (myfile.is_open())
	{
		std::cout << "Open FD with success !" << std::endl;
		while (std::getline(myfile, cache))
		{
			if (cache.find(s1) != std::string::npos)
				cache.replace(cache.find(s1), s1.length(), s2);
			to_ret = to_ret + cache + "\n";	
		}
	}
	else
		std::cout << "Error: File can't be open" << std::endl;

	myfile.close();

	myfile.open(replace, std::fstream::out | std::fstream::app);
	if (myfile.is_open())
	{
		std::cout << "Creation of replace FD" << std::endl;
		myfile << to_ret;
	}
	else
		std::cout << "Error: File can't be open" << std::endl;
	myfile.close();
	
	return (0);
}