/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:38:31 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/31 07:37:44 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP

#include "Weapon.h"

class	Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string type);
		/*
		 *	method get
		*/
		const std::string	getType(void) const;
		/*
		 *	method set
		*/
		void				setType(std::string type);
		~Weapon(void);
};

#endif
