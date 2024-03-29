/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:44:58 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/01 08:26:23 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

/* ************************************************************************** */
/*  Includes                                                                  */
/* ************************************************************************** */

#include <string>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include "Zombie.hpp"

/* ************************************************************************** */
/*  Macros                                                                    */
/* ************************************************************************** */

#define	ERROR	-1
#define	SUCCESS	0

/******************************************************************************/
/*  Funtions                                                                  */
/******************************************************************************/

Zombie	*zombieHorde(int N, std::string name);

#endif
