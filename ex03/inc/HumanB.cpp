/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:10:09 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/30 11:56:36 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_CPP
# define HUMANB_CPP

#include "Weapon.h"

class	HumanB
{
	private:
		std::string	name;
		Weapon		weapon;
	public:
		HumanA(void);
		void	attack(void);
		~HumanA(void);
};
#endif
