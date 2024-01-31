/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:10:09 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/31 07:11:48 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_CPP
# define HUMANB_CPP

#include "Weapon.h"

class	HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &Weapon);
		void	attack(void);
		~HumanB(void);
};
#endif
