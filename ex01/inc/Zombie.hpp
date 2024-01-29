/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:47:30 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/29 10:49:02 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define	ZOMBIE_HPP

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		void	setName(std::string name);
		void	announce(void);
		~Zombie(void);
};
#endif
