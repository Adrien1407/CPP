/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:32:31 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/08 15:33:36 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &obj) 
{
	std::cout << "Copy constructor called" << std::endl;
	this->rawBits = obj.getRawBits();
}

Fixed &Fixed::operator =(Fixed const &obj)
{
	std::cout << "assignation operator called" << std::endl;
	this->rawBits = obj.getRawBits();

	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "member function getRawBits called" << std::endl;
	return (this->rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
	std::cout << "member function setRawBits called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
}
