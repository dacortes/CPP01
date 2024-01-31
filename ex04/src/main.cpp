/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 08:53:16 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/31 15:08:22 by dacortes         ###   ########.fr       */
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
	if (error == ERROR_OPEN_FL)
		std::cout << "Error: open file: " << arg << std::endl;
	return (EXIT_FAILURE);
}

bool	swap_word_file(char **av)
{
	std::string		out_file;
	std::string		out_line;
	std::fstream	file;
	std::string		line;
	std::size_t		pos;

	pos = 0;
	file.open(av[1]);
	if (!file.is_open())
		return (msg_error(av[1], ERROR_OPEN_FL));
	out_file = av[1];
	out_file += ".replace";
	std::cout << out_file << std::endl;
	while (std::getline(file, line))
	{
		line += "\n";
		while (true)
		{
			pos = line.find(av[2]);
			if (pos == std::string::npos)
				break;
			line.replace(pos, ((std::string)av[2]).length(), av[3]);
			pos += ((std::string)av[3]).length();
			//std::cout << line << std::endl;
		}
		out_line += line; 
		std::cout << line;
	}
	std::cout << "----\n" << out_line;
	file.close();
	return (EXIT_SUCCESS);
}

int	main(int ac, char **av)
{
	if (ac != 4)
		return (msg_error(NULL, ERROR_INV_ARGS));
	if (!*av[1] || !*av[2] || !*av[3])
		return ((!*av[1] && msg_error("file", ERROR_EMPTY_FL))
			  || (!*av[2] && msg_error("word", ERROR_EMPTY_WD))
			  || (!*av[3] && msg_error("word", ERROR_EMPTY_WD)));
	swap_word_file(av);
	return (EXIT_SUCCESS);
}
