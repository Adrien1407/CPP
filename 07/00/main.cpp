/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:15:58 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/02 15:55:50 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
/*
int main(int argc, const char *argv[])
{
	int a,b;
	a = 2;
	b = 4;
	double c, d;
	c = 3.0000;
	d = 4.6;
std::cout << "a = " << a << std::endl;
std::cout << "b = " << b << std::endl;
std::cout <<"le max est "<< ::max(a, b) << std::endl;
std::cout <<"le min est "<<::min(a, b) << std::endl;
::swap(a, b);
std::cout << "values are swapped" << std::endl;
std::cout << "a = " << a << std::endl;
std::cout << "b = " << b << std::endl;
std::cout <<  std::endl;
std::cout << "c = " << c << std::endl;
std::cout << "d = " << d << std::endl;
std::cout <<"le min est "<< ::min(c, d) << std::endl;
std::cout <<"le max est "<< ::max(c, d) << std::endl;
::swap(c, d);
std::cout << "values are swapped" << std::endl;
std::cout << "c = " << c << std::endl;
std::cout << "d = " << d << std::endl;
return 0;
}
*/
int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}
