/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:32:31 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/14 12:47:45 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

Fixed::Fixed(void) : rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const int n) 
{
	std::cout << "int constructor called" << std::endl;
	this->rawBits = n << this->bits;
}
Fixed::Fixed(const float n) 
{
	std::cout << "Float constructor called" << std::endl;
	this->rawBits = roundf(n * (1 << this->bits));
}
Fixed::Fixed(Fixed const &rhs) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->rawBits = rhs.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const
{
	float f;
	f = (float) (this->rawBits) / (1 << (this->bits));
		return (f);
}
int	Fixed::toInt(void) const
{
	int k;
	k = (int) (this->rawBits) / (1 << this->bits);
	return (k);
}
int	Fixed::getRawBits(void) const
{
	return (this->rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}

std::ostream &operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return (o);
}
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
