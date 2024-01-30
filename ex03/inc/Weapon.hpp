/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:38:31 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/29 16:01:06 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
#define WEAPON_HPP

#include "Weapon.h"

class	Weapon
{
	private:
		std::string	type;
	public:
		Weapon(void);
		const std::string	getType(void);
		void		setType(std::string _type);
		~Weapon(void);
};

#endif
