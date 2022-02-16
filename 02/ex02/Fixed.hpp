/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:20:43 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/09 16:16:40 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed {
	public :
		Fixed();
		Fixed(Fixed const &obj);
		Fixed(const float);
		Fixed(const int);
		~Fixed();

		Fixed &operator = (Fixed const &obj);
		
		bool operator <= (Fixed const &obj);
		bool operator < (Fixed const &obj);
		bool operator > (Fixed const &obj);
		bool operator >= (Fixed const &obj);
		bool operator == (Fixed const &obj);
		bool operator != (Fixed const &obj);
		
		Fixed operator * (Fixed const &obj);
		Fixed operator - (Fixed const &obj);
		Fixed operator + (Fixed const &obj);
		Fixed operator / (Fixed const &obj);
	
		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed	&operator ++();
		Fixed	&operator --();
		static const Fixed &min(Fixed const &a, Fixed const &b);
		static const Fixed &max(Fixed const &a, Fixed const &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const; 
		float	toFloat(void) const;
	private :
		int	rawBits;
		static const int	bits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &src);

#endif
