/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:20:43 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/08 16:04:19 by adlancel         ###   ########.fr       */
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
		Fixed(int const n);
		Fixed(float const n);
		~Fixed();
		Fixed &operator = (Fixed const &obj);
		int		toInt(void) const; 
		float	toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private :
		int	rawBits;
		static const int	bits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &src);

#endif
