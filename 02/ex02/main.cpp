/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:53:47 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/14 12:59:17 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

int main(void) {
std::cout << "----- Subject tests -----" << std::endl;
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "----- Personnal tests ------" << std::endl;
	Fixed c(1.00f);
	Fixed d(c + Fixed(3.14f));
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	Fixed e(c + d);
	std::cout << "e = c + d =  " << e << std::endl;
	std::cout << "--e = " << --e << std::endl;
	std::cout << "e-- = " << e-- << std::endl;













	return 0;
}
