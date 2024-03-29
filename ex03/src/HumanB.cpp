/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 06:41:08 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/05 18:28:10 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.h"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

void	HumanB::setWeapon(Weapon &weapon) 
{
	_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (_weapon == NULL)
		return ;
	std::cout << _name <<  " attacks with their " << _weapon->getType()
		<< std::endl;
}

HumanB::~HumanB(void)
{
}
