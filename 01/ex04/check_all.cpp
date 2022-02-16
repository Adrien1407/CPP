/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:02:32 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/14 12:30:20 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool check_all(int ac, char **av)
{
	if (ac != 4)
	{
		display_error("invalid number of parameters");
		return (0);
	}
	if(!av[2])
	{
		display_error("no string to find");
		return (0);
	}
	if(!av[3])
	{
		display_error("no string to replace");
		return (0);	
	}
	return (1);
}
