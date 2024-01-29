/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:20:18 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/29 10:43:11 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.h"

int	main(void)
{
	Zombie *foo;

	foo = zombieHorde(5, "foo");
	for (int i = 0; i < 5; i++)
		foo[i].announce();
	delete[] foo;
	return (SUCCESS);
}
