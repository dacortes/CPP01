/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:04:40 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/01 11:47:33 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.h"

int	main(void)
{
	Harl	two;
	two.complain("DEBUG");
	two.complain("INFO");
	two.complain("WARNING");
	two.complain("ERROR");
	return (EXIT_SUCCESS);
}
