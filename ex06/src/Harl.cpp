/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:31:38 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/01 17:17:38 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.h"

Harl::Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my"
		<< " 7XL-double-cheese-triple-pickle-specialketchup"
		<< " burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs"
		<< " more money. You didn’t put enough bacon in my burger! If you did,"
		<< " I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon"
		<< "for free. I’ve been coming for years whereas you started"
		<< " working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the"
	   	<< " manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*status[4]) (void);

	status[0] = &Harl::debug;
	status[1] = &Harl::info;
	status[2] = &Harl::warning;
	status[3] = &Harl::error;
	switch (level[0])
	{
		case 'D':
			(this->*status[0])();
		case 'I':
			(this->*status[1])();
		case 'W':
			(this->*status[2])();
		case 'E':
			(this->*status[3])();
			break ;
		default:
			std::cout << "Error: invalid arguments" << std::endl; 
	}
}

Harl::~Harl(void)
{
}
