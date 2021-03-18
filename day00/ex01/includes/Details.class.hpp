/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Details.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:44:07 by ksam              #+#    #+#             */
/*   Updated: 2021/03/18 20:55:07 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DETAILS_CLASS_H
# define DETAILS_CLASS_H

class Details
{
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
    public:
		void	putdata();
		void	getdata();
		void	getfirstname();
		void	getlastname();
		void	getnickname();
		void	transform();
        Details(void);
        ~Details(void);
};

#endif