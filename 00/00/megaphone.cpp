/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:02:20 by adlancel          #+#    #+#             */
/*   Updated: 2021/11/14 16:12:51 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	int i;
	int j;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for(i = 1; i < ac; i++)
		{
			std::string str(av[i]);
			for (j = 0; j < str.length(); j++)
				std::cout << (char)std::toupper(str[j]);
		}
	std::cout << std::endl;
	return (0);
}
