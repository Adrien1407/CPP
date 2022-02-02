/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:18:39 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/02 12:09:47 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int		check(char	*pEnd)
{
	if (pEnd == NULL || !*pEnd)
		return (0);
	for (int i = 1; pEnd[i]; i++) 
	{
		if (!isspace(pEnd[i]))
			return (1);
	}
	return (0);
}

void	strToDouble(char const *str)
{
	char *pEnd;
	double n;

	n = strtod(str, &pEnd);
	if (check(pEnd))
	{
		std::cout << "Not a litteral value" << std::endl;
		return ; 
	}
	else
		convert(n);
}
int main(int argc, const char *argv[])
{
	if (argc == 2)
		strToDouble(argv[1]);
	else
		std::cout << "Wrong number of arguments" << std::endl;
	return (0);
}
