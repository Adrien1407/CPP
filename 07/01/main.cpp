/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:11:12 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/02 16:16:27 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(int argc, const char *argv[])
{
	std::string array[3] = {"bonjour", "hello", "Gutentag"};
	int	array_int[4] = {1, 2, 3, 4};
	double array_double[3] = {4.0, 5.2, 6.3};
	::iter(array, 3, ::print);
	::iter(array_int, 3, ::print);
	::iter(array_double, 3, ::print);
	return 0;
}
