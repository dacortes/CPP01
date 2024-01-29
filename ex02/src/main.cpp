/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:00:19 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/29 15:17:31 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*  Includes                                                                  */
/* ************************************************************************** */

#include <string>
#include <cstring>
#include <cstdlib>
#include <iostream>

/******************************************************************************/
/*  Funtions                                                                  */
/******************************************************************************/

int	main(void)
{
	std::string	foo = "HI THIS IS BRAIN";
	std::string *stringPTR = &foo;
	std::string &stringREF = foo;


	std::cout << "foo: " << &foo << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "foo: " << foo << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
	std::cout << "----------------------------" << std::endl;
	return (EXIT_SUCCESS);
}
