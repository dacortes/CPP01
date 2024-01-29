/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:20:18 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/29 09:24:08 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.h"

int	main(void)
{
	Zombie *foo;

	foo = newZombie("foo");
	foo->announce();
	std::cout << "memory" << &foo << std::endl;
	std::cout << "--------------" << std::endl;
	randomChump("random foo");
	delete foo;
	return (SUCCESS);
}
