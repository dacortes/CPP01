/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:41:55 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/30 11:04:52 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.h"

/*
 * -foo[i].setName(std::string(name).append((const char *)&num));
 */

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*foo;

	foo = new Zombie[N];
	for (int i = 0; i < N; i++)
		foo[i].setName(std::string(name));
	return (foo);
}
