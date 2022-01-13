/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:32:31 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/09 16:18:02 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//constructors

Fixed::Fixed(void) : rawBits(0)
{
}

Fixed::Fixed(Fixed const &obj) 
{
	*this = obj;
}

Fixed::Fixed(int const n) 
{
	this->rawBits = n << this->bits;
}

Fixed::Fixed(float const n) 
{
	this->rawBits = roundf(n * (1 << this->bits));
}

//assignation operator

Fixed &Fixed::operator =(Fixed const &obj)
{
	this->rawBits = obj.getRawBits();
	return (*this);
}

//comparision operators

bool	Fixed::operator <=(Fixed const &obj)
{
	return (this->rawBits <= obj.rawBits);
}

bool	Fixed::operator >=(Fixed const &obj)
{
	return (this->rawBits >= obj.rawBits);
}

bool	Fixed::operator >(Fixed const &obj)
{
	return (this->rawBits > obj.rawBits);
}

bool	Fixed::operator <(Fixed const &obj)
{
	return (this->rawBits < obj.rawBits);
}

bool	Fixed::operator !=(Fixed const &obj)
{
	return (this->rawBits != obj.rawBits);
}

bool	Fixed::operator ==(Fixed const &obj)
{
	return (this->rawBits == obj.rawBits);
}

// operators overload

Fixed Fixed::operator *(Fixed const &obj)
{
	return (Fixed(this->toFloat() * obj.toFloat()));
}
Fixed Fixed::operator /(Fixed const &obj)
{
	return (Fixed(this->toFloat() / obj.toFloat()));
}
Fixed Fixed::operator +(Fixed const &obj)
{
	return (Fixed(this->toFloat() + obj.toFloat()));
}
Fixed Fixed::operator -(Fixed const &obj)
{
	return (Fixed(this->toFloat() - obj.toFloat()));
}
// increment and decrement operator

Fixed &Fixed::operator++()
{
	this->rawBits++;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed res = *this;
	++*this;
	return res;
}

Fixed &Fixed::operator--()
{
	this->rawBits--;
	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed res = *this;
	--*this;
	return res;
}
//member functions

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
	return (this->rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}
Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.rawBits > b.rawBits)
		return b;
	return a;
}
Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.rawBits > b.rawBits)
		return a;
	return b;
}
std::ostream &operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return (o);
}
Fixed::~Fixed(void)
{
}
