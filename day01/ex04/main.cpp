/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 17:04:55 by ksam              #+#    #+#             */
/*   Updated: 2021/07/22 18:47:58 by ksam             ###   ########lyon.fr   */
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
	std::string		tmp_cache = "";
	std::string		to_ret = "";
	int		to_find = 0;
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
			while ((to_find = cache.find(s1)) != -1)
			{
				tmp_cache = cache.substr(0, to_find);
				cache = tmp_cache + s2 + cache.substr(to_find + s1.length(), cache.length());
			}
			to_ret = to_ret + cache + "\n";
		}
	}
	else
		std::cout << "Error: File can't be open" << std::endl;
}