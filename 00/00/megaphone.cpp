/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:53:02 by adlancel          #+#    #+#             */
/*   Updated: 2021/11/16 13:07:25 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	print_upper(char *str)
{
	int i;
	i = -1;
	while (str[++i])
		std::cout << std::toupper(str[i]) << std::endl;
}
int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac > 1)
	{
		while (av[++i] != NULL)
			print_upper(av[i]);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
