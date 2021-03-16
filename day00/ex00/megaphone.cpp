/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:11:15 by ksam              #+#    #+#             */
/*   Updated: 2021/03/16 13:20:19 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    int     i;
    size_t  j;

    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < argc)
        {
            j = 0;
            std::string buffer(argv[i]);
            while (j < buffer.length())
            {
                putchar(toupper(buffer[j]));
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}