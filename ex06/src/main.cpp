/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:04:40 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/01 17:19:54 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.h"

bool	msg_error(void)
{
	std::cout << "Error: invalid arguments" << std::endl; 
	return (EXIT_FAILURE);
}

bool check_input(std::string str)
{
	return (!str.compare("DEBUG") || !str.compare("INFO")
			|| !str.compare("WARNING") || !str.compare("ERROR"));
}

int	main(int ac, char **av)
{
	Harl	two;

	if (ac != 2 || !av[1] || !*av[1]
			|| (av[1] && *av[1] && !check_input(av[1])))
		return (msg_error());
	two.complain(av[1]);
	return (EXIT_SUCCESS);
}
