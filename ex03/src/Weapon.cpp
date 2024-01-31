/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 07:21:22 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/31 07:39:55 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.h"

Weapon::Weapon(std::string type)
{
	_type = type;	
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

const std::string	Weapon::getType(void)const
{
	return (_type);	
}

Weapon::~Weapon(void)
{
}
