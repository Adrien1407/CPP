/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:08:28 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/05 14:38:41 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}
Karen::~Karen()
{
}
void	Karen::complain(std::string level)
{
	int i;

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = -1;
	while (++i < 5)
	{
		if (level == levels[i])
			break;
	}
	switch(i)
	{
		case 0:
			{
				Karen::debug();
				break;
			}
		case 1:
			{
				Karen::info();
				break;
			}
		case 2:
			{
				Karen::warning();
				break;
			}
		case 3:
			{
				Karen::error();
				break;
			}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

	}
}

void	Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void	Karen::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void	Karen::warning()
{
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void	Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
