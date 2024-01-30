/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:41:55 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/30 11:02:10 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.h"

/*
 * -foo[i].setName(std::string(name).append((const char *)&num));
 */

Zombie	*zombieHorde(int N, std::string name)
{
	std::string	num;
	Zombie	*foo;

	foo = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		num = std::to_string(i + 1);
		foo[i].setName(std::string(name) + num);
	}
	return (foo);
}
