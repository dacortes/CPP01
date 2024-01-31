/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:58:49 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/31 07:18:08 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.h"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	_name = name;
	_weapon = &weapon;
}

void	HumanA::attack(void)
{
	std::cout << _name <<  " attacks with their " << _weapon->getType()
		<< std::endl;
}

HumanA::~HumanA(void)
{
}
