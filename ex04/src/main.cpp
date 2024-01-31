/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 08:53:16 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/31 09:25:30 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/sed.h"

bool	msg_error(const char *arg, short error)
{
	if (error == ERROR_INV_ARGS)
		std::cout << "Error: invalid arguments" << arg << std::endl;
	if (error == ERROR_EMPTY_WD)
		std::cout << "Error: invalid word: empty: " << arg << std::endl;
	if (error == ERROR_EMPTY_FL)
		std::cout << "Error: invalid file: empty: " << arg << std::endl;
	return (EXIT_FAILURE);
}

int	main(int ac, char **av)
{
	if (ac != 4)
		return (msg_error(NULL, ERROR_INV_ARGS));
	if (!*av[1] || !*av[2] || !*av[3])
		return ((!*av[1] && msg_error("word", ERROR_EMPTY_WD))
			  || (!*av[2] && msg_error("file input", ERROR_EMPTY_FL))
			  || (!*av[3] && msg_error("file output", ERROR_EMPTY_FL)));
	return (EXIT_SUCCESS);
}
