/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:32:31 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/09 16:28:26 by adlancel         ###   ########.fr       */
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

Fixed::Fixed(int const n) 
{
	std::cout << "int constructor called" << std::endl;
	this->rawBits = n << bits;
}
Fixed::Fixed(float const n) 
{
	std::cout << "Float constructor called" << std::endl;
	this->rawBits = roundf(n * (1 << this->bits));
}

Fixed &Fixed::operator =(Fixed const &obj)
{
	std::cout << "assignation operator called" << std::endl;
	this->rawBits = obj.getRawBits();

	return (*this);
}

int	Fixed::toInt(void) const
{
	int k;
	k = (int) (this->rawBits) / (1 << this->bits);
	return (k);
}
float	Fixed::toFloat(void) const
{
	float f;
	f = (float) (this->rawBits) / (1 << (this->bits));
		return (f);
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

std::ostream &operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return (o);
}
Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
}
