/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Details.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:44:07 by ksam              #+#    #+#             */
/*   Updated: 2021/03/18 00:59:23 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DETAILS_CLASS_H
# define DETAILS_CLASS_H

class Details
{
    public:

        std::string	first_name;
        std::string	last_name;
        std::string	nickname;
		std::string	login;
        std::string	postal_address;
        std::string	email;
        std::string	phone_number;
		std::string	birthday;
		std::string	fav_meal;
		std::string	underwear_color;
		std::string	darkest_secret;

		Details		*next;
		Details		*prev;
		int			index;

        Details(void);
        ~Details(void);
};


class Master
{
	public :
		unsigned int	count;
		Details			*first;
		Details			*last;
		Details			*current;

		Master(void);
		~Master(void);

};
#endif