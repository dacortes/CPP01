/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:58:49 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/30 12:04:01 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.h"

HumanA::HumanA(std::string _name, Weapon _wapon): name(_name), wapon(_wapon)
{
}

void	HumanA::attack(void)
{
	std::cout << name <<  " attacks with their " << weapon << std::endl;
}

HumanA::~HumanA(void)
{
}
