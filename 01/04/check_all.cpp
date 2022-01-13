/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:02:32 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/04 16:50:11 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool check_all(int ac, char **av)
{
	if (ac != 4)
	{
		display_error("invalid number of parameters\n");
		return (0);
	}
	if(!av[2])
	{
		display_error("no string to find\n");
		return (0);
	}
	if(!av[3])
	{
		display_error("no string to replace\n");
		return (0);	
	}
	return (1);
}
