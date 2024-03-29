/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:53:58 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/31 07:07:27 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_CPP
# define HUMANA_CPP

#include "Weapon.h"

class	HumanA
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack(void);
		~HumanA(void);
};

#endif
