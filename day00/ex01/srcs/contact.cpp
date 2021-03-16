/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:45:42 by ksam              #+#    #+#             */
/*   Updated: 2021/03/16 21:40:18 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contact.hpp"

int main(int argc, char **argv)
{
    if (argc  == 2)
    {
        std::string cmd(argv[1]);
        if (!cmd.compare("EXIT"))
        {
            std::cout << "Je dois quitter et tout effacer." << std::endl;
            return (0);
        }
        else if (!cmd.compare("ADD"))
        {
            std::cout << "Je dois proposer a l'utilisateur de remplir un champ à la fois parmi une liste" << std::endl;
        }
        else if (!cmd.compare("SHARE"))
            std::cout << "Je suis share" << std::endl;
        else
            std::cout << "Invalid command" << std::endl;

    }
    else 
    {
        Contact test;
        return (0);
    }
    return (0);
}