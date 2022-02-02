/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:53:27 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/02 12:37:51 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

void	toInt(double value)
{

	if (value > std::numeric_limits<int>::min() && value < std::numeric_limits<int>::max() && !std::isnan(value))
	{
		std::cout << "int = " << static_cast<int>(value) << std::endl;
	}
	else 
		std::cout << "int = not possible" << std::endl;
}
void	toFloat(double value)
{
if (value == std::floor(value) || !std::isinf(value))
		std::cout <<"float = " << static_cast<float>(value) << ".0f" << std::endl;
else
		std::cout <<"float = " << static_cast<float>(value) << "f" << std::endl;
}
void	toChar(double value)
{
	if (value >= 32 && value <= 126)
		std::cout << "char = " << static_cast<char>(value) << std::endl;
	else if (value < 0 ||  value > 127  || std::isnan(value))
		std::cout << "char = not possible" << std::endl;
	else
		std::cout << "char = non displayable" << std::endl;
}
void	toDouble(double value)
{
if (value ==  std::floor(value) || !std::isinf(value))
		std::cout <<"double = " << static_cast<double>(value) << ".0f" << std::endl;
else
		std::cout <<"double = " << static_cast<double>(value) << "f" << std::endl;

}
void	convert(double value)
{
	toChar(value);
	toInt(value);
	toFloat(value);
	toDouble(value);
}
