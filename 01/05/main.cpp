/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:27:20 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/05 13:31:45 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen karen;

	if (ac == 2)
	{
		karen.complain(av[1]);
	}
	else
		std::cout << "Wrong instruction for Queen Karen" << std::endl;
}
