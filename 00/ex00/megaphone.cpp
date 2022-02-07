/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:02:20 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/07 10:19:17 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for(int i = 1; i < ac; i++)
		{
			std::string str(av[i]);
			for (unsigned int j = 0; j < str.length(); j++)
				std::cout << static_cast<char>(std::toupper(str[j]));
				
		}
	std::cout << std::endl;
	return (0);
}
