/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:38:31 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/30 12:07:03 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP

#include "Weapon.h"

class	Weapon
{
	private:
		std::string	type;
	public:
		Weapon(void);
		Weapon(std::string type);
		const std::string	getType(void);
		/*
		 *	method get
		*/
		std::string const	get_type(void) const;
		/*
		 *	method set
		*/
		void				setType(std::string type);
		~Weapon(void);
};

#endif
