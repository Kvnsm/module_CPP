/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:14:04 by ksam              #+#    #+#             */
/*   Updated: 2021/08/26 01:02:20 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public : 
		Cure();
		Cure(Cure const & cure);
		~Cure();
		virtual AMateria * clone() const;
		virtual void use(ICharacter& target);
};
#endif