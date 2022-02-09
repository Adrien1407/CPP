/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:08:28 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/09 17:12:49 by adlancel         ###   ########.fr       */
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
	void (Karen::*f_pointer[4])(void);

	f_pointer[0] = &Karen::debug;
	f_pointer[1] = &Karen::info;
	f_pointer[2] = &Karen::warning;
	f_pointer[3] = &Karen::error;

	for (i = 0; i < 4; i++) {
		if (level == levels[i])
			break;
	}
	switch(i)
	{
		default:
		if (i > 3)
		{
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
		case 0:
		(this->*f_pointer[i++])();
		case 1:
		(this->*f_pointer[i++])();
		case 2:
		(this->*f_pointer[i++])();
		case 3:
		(this->*f_pointer[i++])();

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
